char * defangIPaddr(char * address){
    int y=strlen(address);
char * x = malloc(sizeof(char)*(y+7));
int a=0;
for(int i=0;i<y;i++){
    if(address[i]!='.'){
        x[a]=address[i];
        a++;
        continue;
    }
    x[a]='[';
    a++;
    x[a]='.';
    a++;
    x[a]=']';
    a++;
}
x[a]='\0';
return x;
}