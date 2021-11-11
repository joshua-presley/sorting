#include<iostream>
using namespace std;

void swap(int &i, int &j){
    int tmp = i;
    i = j;
    j = tmp;
}



void PrintArray(int arr[], size_t size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << ' ';
    }
}