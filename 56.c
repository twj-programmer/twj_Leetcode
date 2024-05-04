int cmp(int ** ptr1, int ** ptr2)
{
    return (ptr1[0][0] > ptr2[0][0]);
}

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes)
{
    qsort(intervals, intervalsSize, sizeof(intervals[0]), cmp);
    *returnSize = 0;
    int ** ans = malloc(sizeof(int*) * intervalsSize);

    for (int i = 1; i < intervalsSize; i++)
    {
        if (intervals[i][0] > intervals[i - 1][1])
        {
            ans[*returnSize] = malloc(sizeof(int) * (*intervalsColSize));
            ans[(*returnSize)++] = intervals[i - 1];
        }
        else
        {
            if (intervals[i - 1][1] > intervals[i][1])
                intervals[i][1] = intervals[i - 1][1];
            intervals[i][0] = intervals[i - 1][0];
        }
    }
    ans[*returnSize] = malloc(sizeof(int) * (*intervalsColSize));
    ans[(*returnSize)++] = intervals[intervalsSize - 1];

    *returnColumnSizes = malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < *returnSize; i++)
        (*returnColumnSizes)[i] = 2;

    return ans; 
}
