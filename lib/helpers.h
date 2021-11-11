void swap(int &i, int &j){
    int tmp = i;
    i = j;
    j = tmp;
}

size_t GetArraySize(int arr[]){
    size_t size = sizeof(arr) / sizeof(arr[0]);
    return size;
}