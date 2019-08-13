#include <iostream>

using namespace std;

int* BubbleSort(int* list, int size){
    for (int i = (size - 1); i > 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if(list[j] > list[j + 1]){
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    return list;
}

int main(){
    int list[] = { 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 138 };
    int* sortedlist = BubbleSort(list, 12);
    for (int i = 0; i < 12; i++)
    {
        cout<<sortedlist[i]<<endl;
    }
    return 0;
}