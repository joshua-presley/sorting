#include<iostream>
#include "lib\helpers.h"
using namespace std;


void SelectionSort(int unsorted[], size_t size){

    for(int i = 0; i < size; i++){

        int smallestIndex = i;
        for(int j = i+1; j < size; j++){
            if(unsorted[j] < unsorted[smallestIndex]){
                smallestIndex = j;
            }
            swap(unsorted[i], unsorted[smallestIndex]);
        }

    }
}

int main(void){
    int arr[5] = {5,4,3,2,1};
    size_t size = GetArraySize(arr);
    SelectionSort(arr, size);
    PrintArray(arr);
}