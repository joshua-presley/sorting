
#include"helpers.h"

void BubbleSort(int unsorted[], size_t length)
{

    for(int i=0; i<length - 1; i++){
        for(int j = 0; j < length - i - 1; j++){
            if (unsorted[j] > unsorted[j+1])
            {
                Swap(unsorted[j], unsorted[j+1]);
            }
        } 


    }
}

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