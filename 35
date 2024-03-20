int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;
    while (left <= right)
    {
        int mid = ((right - left) >> 1) + left;
        if (target == nums[mid])
            return mid;
        else if (target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
    }
    return left;
}
