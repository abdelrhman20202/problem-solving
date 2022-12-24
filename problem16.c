int repeatedNTimes(int* nums, int numsSize){
    int p1 = 0,p2 = 1;
    while(nums[p1] != nums[p2]){
        p1 = (p1 + 1) % numsSize;
        p2 = (p2 + 2) % numsSize;
        p2 = (p2 + (p1 == p2)) % numsSize;
    }
    return nums[p1];
}