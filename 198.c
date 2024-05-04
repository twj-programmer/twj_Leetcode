int rob(int* nums, int numsSize)
{
    if (numsSize == 1)
        return nums[0];
    int max = 0, dp = 0, dp1 = nums[0], dp2 = fmax(nums[0], nums[1]);
    if (numsSize == 2)
        return dp2;
    for (int i = 2; i < numsSize; i++)
    {
        dp = fmax(dp1 + nums[i], dp2);
        max = max < dp ? dp : max;
        dp1 = dp2;
        dp2 = dp;
    }
    return max;
}
