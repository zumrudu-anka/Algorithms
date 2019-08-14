#include <iostream>

using namespace std;

void InsertionSort(int* list, int size){
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if(list[j]<list[j - 1]){
                int temp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = temp;
            }
        }
    }
}

int main(){
    int list[] = { 17, 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138 };
    InsertionSort(list, 13);
    for (int i = 0; i < 13; i++)
    {
        cout<<list[i]<<endl;
    }
    return 0;
}