int removeElement(int* nums, int numsSize, int val)
{
    int ans = 0;
    int left = 0, right = 0;
    while (right < numsSize)
    {
        if (nums[right] != val)
        {
            nums[left] = nums[right];
            left++;
        }
        right++;
    }
    ans = left;
    return ans;
}
