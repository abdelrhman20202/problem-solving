/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes){

    *returnColumnSizes =  calloc(gridSize, sizeof(int));
    for (int i = 0; i < gridSize; i++){
        returnColumnSizes[0][i] = *gridColSize;
    }
    *returnSize = gridSize;
    int ** ans = calloc(gridSize, sizeof(int*));


    for (int i = 0 ; i < gridSize; i++){
        ans[i] = calloc(*gridColSize, sizeof(int));
    }

    for (int j = 0; j < *gridColSize; j++){
        int final_col = (j+ k) % *gridColSize;
        int row_shift_amount = (j+ k) / *gridColSize;
        for (int i = 0; i < gridSize; i++){
            int final_row = (i + row_shift_amount) % gridSize;
            ans[final_row][final_col] = grid[i][j];
        }
    }

    return ans;
}