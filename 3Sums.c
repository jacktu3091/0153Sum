/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize) {
    for(int x = 0; x <= numsSize; x++){
        int index = nums[x];
        for(int y = x + 1; y <= numsSize; y++){
            for(int z = y + 1; z <= numsSize; z++){
                if(index - (nums[y] + nums[z]) == 0){
                    printf("[%d, %d, %d]\n", index,nums[y],nums[z]);
                }
            }
        }
        
    }
    return 0;
}
