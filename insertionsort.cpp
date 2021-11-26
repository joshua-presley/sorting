#include "lib\helpers.h"
using namespace std;



void InsertionSort(int unsorted[], size_t size){
    for(int i = 1; i < size; i++){
        int indexSwap = i;
        for(int j = i-1; j >=0; j--){
            if(unsorted[i] < unsorted[j]){
                indexSwap = j;
            }
        }

        int ToSwap = unsorted[i];

        for(int k = i; k > indexSwap; k--){
            unsorted[k] = unsorted[k-1];
        }

        unsorted[indexSwap] = ToSwap;

    }
}


int main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    size_t size = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, size);
    PrintArray(arr, size);
}