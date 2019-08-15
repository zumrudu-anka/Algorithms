#include <iostream>
#define arrayLength(array) (sizeof((array))/sizeof((array)[0]))

using namespace std;

int get_maximum_value(int* list, int size){
    int maximum = list[0];
    for (int i = 1; i < size; i++)
    {
        if(list[i] > maximum){
            maximum = list[i];
        }
    }
    return maximum;
}

void CountingSort(int* list, int size){
    int* count_list = new int[get_maximum_value(list,size) + 1];
    for (int i = 0; i < get_maximum_value(list,size) + 1; i++)
    {
        count_list[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count_list[list[i]]++;
    }
    for (int i = 0, index = 0; i < get_maximum_value(list,size) + 1; i++)
    {
        if(count_list[i] > 0){
            for (int j = 0; j < count_list[i]; j++)
            {
                list[index] = i;
                index++;
            }
        }
    }
}

int main(){
    int list[] = { 13, 55, 27, 35, 18, 1, 0, 14, 13, 14, 19, 59 };
    CountingSort(list, arrayLength(list));
    for (int i = 0; i < arrayLength(list); i++)
    {
        cout<<list[i]<<endl;
    }
    return 0;
}