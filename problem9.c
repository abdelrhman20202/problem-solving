/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes){
    int n = *matrixColSize;
    *returnSize = n;
    int *return_col = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) return_col[i] = matrixSize;
    *returnColumnSizes = return_col;
    
    int **result = (int **)malloc(n*sizeof(int *));

    for(int i=0;i<n;i++) {
        result[i] = (int *)malloc(matrixSize*sizeof(int));
    }
    
    for(int i=0;i<matrixSize;i++) {
        for(int j=0;j<n;j++) {
            result[j][i] = matrix[i][j];
        }
    }
    
    
    return result;
}