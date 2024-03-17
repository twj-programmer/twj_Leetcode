int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;

    int leftMulti[numsSize], rightMulti[numsSize];
    leftMulti[0] = nums[0], rightMulti[numsSize - 1] = nums[numsSize - 1];
    for (int i = 1, j = numsSize - 2; i < numsSize, j >= 0; i++, j--)
    {
        leftMulti[i] = leftMulti[i - 1] * nums[i];
        rightMulti[j] = rightMulti[j + 1] * nums[j];
    }

    int * ans = malloc(sizeof(int) * (*returnSize));
    ans[0] = rightMulti[1], ans[numsSize - 1] = leftMulti[numsSize - 2];
    for (int i = 1; i < numsSize - 1; i++)
        ans[i] = leftMulti[i - 1] * rightMulti[i + 1];
    
    return ans;
}
