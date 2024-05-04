void swap(int * a ,int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void reserve(int * nums, int left, int right)
{
    while (left < right)
    {
        swap(&nums[left], &nums[right]);

        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k)
{
    k %= numsSize;
    reserve(nums, 0, numsSize - 1);
    reserve(nums, 0, k - 1);
    reserve(nums, k, numsSize - 1);
}
