int sumOddLengthSubarrays(int* arr, int arrSize){
    int sum=0,l;
    for(int i=1;i<=arrSize;i+=2){ 
        for(int j=0;j<i;j++){ 
            for(l=0;l<=(arrSize-i);l++){
                sum+=arr[l+j];
                
                
            }