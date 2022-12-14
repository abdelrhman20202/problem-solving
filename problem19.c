
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** uncommonFromSentences(char * s1, char * s2, int* returnSize){
    char*words[100],*temp;
    char**ans=malloc(100*sizeof(char*));
    int size=0,i,j,chk;
    temp=strtok(s1," ");
    while(temp){
        words[size++]=temp;
        temp=strtok(NULL," ");
    }
    
    temp=strtok(s2," ");
    while(temp){
        words[size++]=temp;
        temp=strtok(NULL," ");
    }
    
    *returnSize=0;
    for(i=0;i<size;i++){
        chk=1;
        for(j=0;j<size;j++)
            if(i!=j&&strcmp(words[i],words[j])==0){
                chk=0;
                break;
            }
        if(chk)
            ans[(*returnSize)++]=words[i];
    }
    ans=realloc(ans,(*returnSize)*sizeof(char*));
    return ans;
}