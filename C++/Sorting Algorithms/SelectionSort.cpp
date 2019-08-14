#include <iostream>

using namespace std;

void SelectionSort(int* list, int size){
    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if(list[j] < list[index]){
                index = j;
            }
        }
        int temp = list[i];
        list[i] = list[index];
        list[index] = temp;
    }
}

int main(){
    int list[] = { 17, 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138 };
    SelectionSort(list, 13);
    for (int i = 0; i < 13; i++)
    {
        cout<<list[i]<<endl;
    }
    return 0;
}