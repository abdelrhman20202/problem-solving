int mostWordsFound(char ** sentences, int sentencesSize){
int max=0, count=0;
for(int i=0; i<sentencesSize; i++){
    count=0;
    for(int j=0; j<strlen(sentences[i]); j++){
        if(sentences[i][j]==' ')
        count++;
    }
    count++;
    if(max<count)
    max=count;
}
return max;
}