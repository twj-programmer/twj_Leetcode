int cmp(const void * ptr1, const void * ptr2)
{
    return *((int*)ptr1) > *((int*)ptr2);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    *returnSize = 0;
    int ** ans = malloc(sizeof(int*) * 20000);
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 0; i < numsSize - 2; i++)
    {
        if (nums[i] > 0)
            break;
        //与前一个比
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right)
        {
            if (nums[left] + nums[right] + nums[i] > 0)
                right--;
            else if (nums[left] + nums[right] + nums[i] < 0)
                    left++;
                else
                {
                    int * arr = malloc(sizeof(int) * 3);
                    arr[0] = nums[i];
                    arr[1] = nums[left];
                    arr[2] = nums[right];
                    ans[(*returnSize)++] = arr;
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                }
        }

    }
    *returnColumnSizes = malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < *returnSize; i++)
        (*returnColumnSizes)[i] = 3;
    return ans;
}
