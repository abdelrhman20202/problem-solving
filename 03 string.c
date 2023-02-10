int countConsistentStrings(char * allowed, char ** words, int wordsSize){
int ret = 0;
int check = 0;
for (int x = 0; x < wordsSize; x++) {

    for (int y = 0; words[x][y] != '\0'; y++)
        if (strchr(allowed, words[x][y]))
            check++;
    if(check == strlen(words[x]))
        ret++;
    check = 0;
}
return ret;
}