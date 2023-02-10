/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    char **result = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 15 == 0) {
            result[i] = (char*)malloc(sizeof(char) * (sizeof("FizzBuzz")));
            sprintf(result[i], "FizzBuzz");
            continue;
        }
        if ((i + 1) % 3 == 0) {
            result[i] = (char*)malloc(sizeof(char) * (sizeof("Fizz")));
            sprintf(result[i], "Fizz");
            continue; 
        }
        if ((i + 1) % 5 == 0) {
            result[i] = (char*)malloc(sizeof(char) * (sizeof("Buzz")));
            sprintf(result[i], "Buzz");
            continue;
        }
        int bitWidth = 1;
        int index = i;
        while ((index /= 10) > 0) {
            bitWidth++;
        }
        result[i] = (char*)malloc(sizeof(char) * (bitWidth + 1));
        sprintf(result[i], "%d", i + 1);
    }
    *returnSize = n;
    return result;
}