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
    }
    return result;
}

int main(){
    int list[] = {5, 7, 2, 3, 15, 8, 100, 13, 0, -15, 12};
    int* result = new int[2];
    result = sequential_search(list, 11, 100);
    for (int i = 0; i < 2; i++)
    {
        cout<<result[i]<<endl;
    }
    
    return 0;
}