int findLucky(int* arr, int arrSize){
int hash[501] = {0}, num = -1;
    for(int i = 0; i < arrSize; i++) {
        hash[arr[i]]++;
    }
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] == hash[arr[i]]) num = (arr[i] > num) ? arr[i] : num;
    }
    return num;
}
