#include<iostream>
using namespace std;


void BubbleSort(int unsorted[])
{

    int length = sizeof(unsorted) / sizeof(int);
    cout << length << ' ';
    for(int i=0; i<=length; i++){
        if(unsorted[i] > unsorted[i+1]){

            int tmp = unsorted[i+1];
            int tmp1 = unsorted[i];
            unsorted[i + 1] = tmp1;
            unsorted[i] = tmp;
        }

        cout << unsorted[i] << ' ';

    }
}

int main() { 


    int arr[3] = {3,2,1};

    BubbleSort(arr);

    return 0;
}

