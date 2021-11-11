#include<iostream>
using namespace std;

void swap(int &i, int &j){
    int tmp = i;
    i = j;
    j = tmp;
}

size_t GetArraySize(int arr[]){
    cout << "Getting array size..." << endl;
    size_t size = sizeof(arr) / sizeof(arr[0]);
    cout << size << ' ';
    cout << endl;
    return size;
}

void PrintArray(int arr[]){
    size_t size = GetArraySize(arr);
    for(int i = 0; i<size; i++){
        cout << arr[i] << ' ';
    }
}