int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j, m, n;
    *returnSize = 2;
    int* result = malloc(2*sizeof(int));
    for(i = 0; i < numsSize; i++){
        m = nums[i];
        for(j = 0; j < i; j++){
            n = nums[j];
            if(m + n == target){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}
