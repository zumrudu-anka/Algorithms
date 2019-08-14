#include <iostream>

using namespace std;

void MergeSort(int* list,int size){
    if (size > 1)
    {
        int* left_half = new int[size / 2];
        int right_size = size % 2 == 0 ? size / 2 : size / 2 + 1;
        int* right_half = new int[right_size];
        
        for (int i = 0; i < size / 2; i++)
        {
            left_half[i] = list[i];
        }

        for (int i = size / 2, j = 0; i < size, j < right_size; i++, j++)
        {
            right_half[j] = list[i];
        }

        MergeSort(left_half,size / 2);
        MergeSort(right_half,right_size);
        
        int i = 0, j = 0, k = 0;
        
        while (i < size / 2 && j < right_size){
            if(left_half[i] < right_half[j]){
                list[k] = left_half[i];
                i++;
            }
            else{
                list[k] = right_half[j];
                j++;
            }
            k++;
        }
        if(i < size / 2){
            for (int index = i; index < size / 2; index++)
            {
                list[k] = left_half[index];
                k++;
            }
        }
        else{
            for (int index = j; index < right_size; index++)
            {
                list[k] = right_half[index];
                k++;
            }
        }
    }
}

int main(){
    int list[] = { 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138 };
    MergeSort(list, 12);
    for (int i = 0; i < 12; i++)
    {
        cout<<list[i]<<endl;
    }
    return 0;
}