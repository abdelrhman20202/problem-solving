int minStartValue(int* nums, int numsSize)
{
   int sum = nums[0];
    int minimum = nums[0];
    for (int i = 1; i < numsSize; ++i) {
        sum += nums[i];
        if (sum < minimum){
            minimum = sum;
        }
    }
    return minimum >= 1?1:1-minimum;
}