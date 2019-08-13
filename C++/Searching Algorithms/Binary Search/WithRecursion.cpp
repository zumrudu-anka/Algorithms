#include <iostream>

using namespace std;

bool BinarySearchWithRecursion(int* list,int size, int value){
    if(size / 2 == 0){
        if(list[size / 2] == value){
            return true;
        }
        return false;
    }
    else if (list[size / 2] == value)
    {
        return true;
    }
    else if (list[size / 2] > value)
    {
        cout<<endl<<"Kucuk Yarida Aranacak"<<endl;
        int* newlist = new int[size / 2];
        for (int i = 0; i < size / 2; i++)
        {
            newlist[i] = list[i];
        }
        return BinarySearchWithRecursion(newlist, size / 2, value);
    }
    else
    {
        cout<<endl<<"Buyuk Yarida Aranacak"<<endl;
        int newsize = (size % 2) == 0 ? (size / 2) : (size / 2 + 1);
        int* newlist = new int[newsize];
        for (int i = (size / 2), j = 0; i < size, j < newsize; i++, j++)
        {
            newlist[j] = list[i];
        }
        return BinarySearchWithRecursion(newlist, newsize, value);
    }
}

int main(){
    int list[] = { 3, 5, 7, 15, 18, 27, 66, 78, 100, 105, 127 }; 
    if (BinarySearchWithRecursion(list, 11, 127)){
        cout<<"Bulundu";
    }
    else{
        cout<<"Bulunmadi";
    }
    return 0;
}