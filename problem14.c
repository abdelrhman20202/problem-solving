/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findRestaurant(char ** list1, int list1Size, char ** list2, int list2Size, int* returnSize){
    int * temp = (int *)malloc(list1Size*sizeof(int));
    for(int i=0; i<list1Size; i++) temp[i] = -1;
    int idx = 0, max = -1, min = 2000;
    for(int i=0; i<list1Size; i++)
        for(int j=0; j<list2Size; j++)
            if(strcmp(list1[i], list2[j]) == 0)
            {
                temp[i] = i + j;
                idx++;
                if(i+j < min) min = i + j;
                if(i+j > max) max = i + j;
            }
    char ** result = (char **)malloc(idx*sizeof(char *));
    idx = 0;
    for(int i=0; i<list1Size; i++)
        if(temp[i] == min)
        {
            result[idx] = (char *)malloc((strlen(list1[i]) + 1)*sizeof(char));
            strcpy(result[idx++], list1[i]);
        }
    *returnSize = idx;
    return result;
}