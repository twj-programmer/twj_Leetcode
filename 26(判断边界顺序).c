int removeDuplicates(int* nums, int numsSize)
{
    int left = 0, right = 0;
    while (right < numsSize)
    {
        nums[left] = nums[right];
        while (nums[left] == nums[right] && right < numsSize)
            right++;
        left++;
    }
    return left;
}
/*
 *int removeDuplicates(int* nums, int numsSize)
 *{
 *    int left = 0, right = 0;
 *    while (right < numsSize)
 *    {
 *        nums[left] = nums[right];
 *        while (nums[left] == nums[right] && right < numsSize) // 前后顺序
 *            right++;
 *        left++;
 *    }
 *    return left;
 *}
 */
