#include <iostream>

using namespace std;

int* sequential_search(int *list, int size, int value){
    int* result = new int[2];
    result[0] = 0;
    result[1] = -1;
    for (int i = 0; i < size; i++)
    {
        if (list[i] == value)
        {
            result[0] = 1;
            result[1] = i + 1;
            return result;
        }
        else if(list[i] > value){
            return result;
        }
    }
    return result;
}

int main(){
    int list[] = {2, 3, 5, 7, 8, 12, 15, 21, 67, 100};
    int* result = new int[2];
    result = sequential_search(list, 10, 21);
    for (int i = 0; i < 2; i++)
    {
        cout<<result[i]<<endl;
    }
    
    return 0;
}