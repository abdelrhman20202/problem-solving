int lengthOfLastWord(char * s){
    int c=0;
    for(int i=strlen(s)-1;i>=0;i--){
        if(s[i]==' '){
            c++;
        }
        else{
            break;
        }
    }
    int c1=0;
    for(int i=strlen(s)-c-1;i>=0;i--){
        if(s[i]!=' '){
            c1++;
        }
        else{
            break;
        }
    }
    return c1;

}