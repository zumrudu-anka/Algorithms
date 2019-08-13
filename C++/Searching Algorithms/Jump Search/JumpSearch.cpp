#include <iostream>
#include <math.h>
using namespace std;

int* JumpSearch(int* list, int size, int value){
    int jump_length = (sqrt(size));
    int* result = new int[2];
    result[0] = 0; result[1] = -1;
    for (int i = jump_length; i < size; i += jump_length)
    {
        if(list[i] > value){
            for (int j = (i - jump_length); j < i; j++)
            {
                if(list[j] == value){
                    result[0] = 1;
                    result[1] = j;
                    return result;
                }
            }
        }
        else if((i + jump_length) >= size){
            for (int j = i; j < size; j++)
            {
                if (list[j] == value)
                {
                    result[0] = 1;
                    result[1] = j;
                    return result;
                }
            }
        }
    }
    return result;
}

int main(){
    int list[] = {1, 3, 7, 9, 11, 13, 19, 29, 38, 46, 51, 87, 99, 110, 132, 159};
    int* result = new int[2];
    result = JumpSearch(list, 16, 159);
    for (int i = 0; i < 2; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}