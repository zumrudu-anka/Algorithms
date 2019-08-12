#include <iostream>

using namespace std;

int* BinarySearch(int* list, int size, int value){
    int* result = new int[2];
    result[0] = 0;
    result[1] = -1;
    int first_index = 0;
    int last_index = size;
    while (last_index - first_index > 0)
    {
        if (list[(last_index + first_index) / 2] == value)
        {
            result[0] = 1;
            result[1] = (last_index + first_index) / 2;
            return result;
        }
        else if (list[(last_index + first_index) / 2] < value)
        {
            first_index = (last_index + first_index) / 2 + 1;
        }
        else
        {
            last_index = (last_index + first_index) / 2;
        }
    }
    return result;
}

int main(){
    int list[] = { 3, 5, 7, 15, 18, 27, 66, 78, 100, 105 };
    int* result = new int[2];
    // result[0] - > 0 ise bulunmadi, 1 ise bulundu
    // result[1] - > bulundu ise index numarasi
    result = BinarySearch(list, 10, 2);
    for (int i = 0; i < 2; i++)
    {
        cout<<result[i]<<endl;
    }
    
    return 0;
}