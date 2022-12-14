/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findWords(char ** words, int wordsSize, int* returnSize){
    char* hashC[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
    int* hash = (int*)calloc(26, sizeof(int));
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < strlen(hashC[i]); j++)
            hash[hashC[i][j]-'a'] = i+1;
    
    char** ans = (char**)calloc(wordsSize, sizeof(char*));
    int ansIdx = 0, matched = 0, len = 0;
    char currChar, prevChar;
    for(int i = 0; i < wordsSize; i++){
        matched = 1;
        len = strlen(words[i]);
        prevChar = (words[i][0]<='Z')?words[i][0]+0x20: words[i][0];
        for(int j = 1; j < len; j++){
            currChar = (words[i][j]<='Z')?words[i][j]+0x20: words[i][j];
 
            if(hash[currChar-'a'] != hash[prevChar-'a'])
            {
                matched = 0;
                break;
            }
            prevChar = currChar;
        }
        if(matched)
        {
            ans[ansIdx] = (char*)calloc(len+1, sizeof(char));
            memcpy(ans[ansIdx++], words[i], len*sizeof(char));
        }
    }
    *returnSize = ansIdx;
    return ans;
}