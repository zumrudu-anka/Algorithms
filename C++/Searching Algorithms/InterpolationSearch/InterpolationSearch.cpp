#include <iostream>

using namespace std;

int* InterpolationSearch(int* list, int size, int value){
    int low = 0;
    int high = size - 1;
    int* result = new int[2];
    result[0] = 0;
    result[1] = -1;
    while (low <= high && value <= list[high] && value >= list[low])
    {
        int position = int(low + ((high - low) / double(list[high] - list[low]) * (value - list[low])));
        if(list[position] == value){
            result[0] = 1;
            result[1] = position;
            return result;
        }
        else if(list[position] > value){
            high = position - 1;
        }
        else{
            low = position + 1;
        }
    }
    return result;
    
}

int main(){
    int list[] = { 3, 5, 7, 15, 18, 27, 66, 78, 100, 105, 110, 138 };
    int* result = new int[2];
    // result[0] - > 0 ise bulunmadi, 1 ise bulundu
    // result[1] - > bulundu ise index numarasi
    result = InterpolationSearch(list, 12, 78);
    for (int i = 0; i < 2; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}