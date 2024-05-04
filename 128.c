int cmp(const void* ptr1, const void* ptr2)
{
    return *((int*)ptr1) > *((int*)ptr2);
}

int longestConsecutive(int* nums, int numsSize)
{
    if (numsSize == 0) return 0;
    if (numsSize == 1) return 1;
    int ans = 0;
    qsort(nums, numsSize, sizeof(int), cmp);
    int ptr = 0;
    while (ptr < numsSize - 1)
    {
        int cnt = 1;
        while (nums[ptr + 1] - nums[ptr] == 1 || nums[ptr + 1] == nums[ptr])
        {
            if (nums[ptr + 1] == nums[ptr])
                cnt--;
            cnt++;
            ptr++;
            if (ptr == numsSize - 1) break;
        }
        ptr++;
        ans = ans > cnt ? ans : cnt;
    }
    return ans;
}
