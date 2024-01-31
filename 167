int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    *returnSize = 2;
    int *result = (int*)malloc(sizeof(int) * *returnSize);
    int left = 0, right = numbersSize - 1;
    while (left < right)
    {
        int currentSum = numbers[left] + numbers[right];
        if (currentSum == target)
        {
            result[0] = left + 1, result[1] = right + 1;
            return result;
        }
        else
        {
            if (currentSum < target)
                left++;
            else right--;
        }
    }
    result[0] = -1, result[1] = -1;
    return result;
}
