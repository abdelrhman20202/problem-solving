int climbStairs(int n){
    int c=1,a=1,b=1;
    for(int i=0;i<n-1;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}