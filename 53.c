int maxSubArray(int* nums, int numsSize)
{
    int pre = 0, max = nums[0];
    for (int i = 0; i < numsSize; i++)
    {
        pre = (pre + nums[i]) > nums[i] ? (pre + nums[i]) : nums[i];
        max = max < pre ? pre : max;
    }
    return max;
}
