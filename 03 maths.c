bool isPalindrome(int x){
    int t=x;
    unsigned int rev=0;
    int d=0;
    while(x>0)
    {
        d=x%10;
        rev=(rev*10)+d;
        x=x/10;
    }
    if(rev==t)
    return true;
    else
    return false;

}