/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize){
unsigned int count=0,n,temp,control=0;
int * array=(int*)malloc(sizeof(int)*(right-left+1));
for(int i=left;i<right+1;i++){
    n=i;
    while(n>0){
        int temp = n % 10;
        if(temp == 0 || i % temp != 0) control=1;
        n -= temp;
        n /= 10;
    }
    if(control==0){
        array[count]=i;
        count++;
        }
control=0;
}
*returnSize = count;
return array;
}