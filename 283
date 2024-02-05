void moveZeroes(int* nums, int numsSize)
{
    int left = 0, right = 0;
    while (right < numsSize) // 用right遍历数组， left为去零后数组的尾元素下标
    {
        if (nums[right])
        {
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
            
            left++;
        }
        right++;
    }
}
