#include <iostream>
#define arrayLength(array) (sizeof((array))/sizeof((array)[0]))

using namespace std;

void swap(int* list, int left, int right){
    int temp = list[left];
    list[left] = list[right];
    list[right] = temp;
}

int Partition(int* list, int low, int high){
    int pivot = low;
    for (int i = low; i < high; i++)
    {
        if(list[i] < list[high]){
            swap(list, i , pivot);
            pivot++;
        }
    }
    swap(list, pivot , high);
    return pivot;
}

void QuickSort(int* list, int low, int high){
    if(low < high){
        int pivot = Partition(list, low, high);
        QuickSort(list, low, pivot - 1);
        QuickSort(list, pivot + 1, high);
    }
}

int main(){
    int list[] = { 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138 };
    QuickSort(list, 0, arrayLength(list) - 1);
    for (int i = 0; i < arrayLength(list); i++)
    {
        cout<<list[i]<<endl;
    }
    return 0;
}