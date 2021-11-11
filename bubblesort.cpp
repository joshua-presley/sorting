#include<iostream>
using namespace std;

//use pointers to easily swap the elements of the array
void Swap(int &i, int &j){
    int tmp = i;
    i = j;
    j = tmp;
}

//Main part of the sorting algorithm.
void BubbleSort(int unsorted[])
{

    int length = 3;

    for(int i=0; i<length - 1; i++){
        for(int j = 0; j < length - i - 1; j++){
            if (unsorted[j] > unsorted[j+1])
            {
                Swap(unsorted[j], unsorted[j+1]);
            }
        } //1,3,2


    }
}

int main() { 


    int arr[3] = {3,2,1};

    BubbleSort(arr);
    
    for(int i = 0; i<3; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}

