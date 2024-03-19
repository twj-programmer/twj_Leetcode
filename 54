int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
{
    int top = 0, bottom = matrixSize - 1, left = 0, right = *matrixColSize - 1;
    int * ans = malloc(sizeof(int) * ((*matrixColSize) * matrixSize));
    *returnSize = 0;
    while (top <= bottom && left <= right)
    {
        if (top != bottom)
        {
            for (int i = left; i < right; i++)
                ans[(*returnSize)++] = matrix[top][i];
        }
        else
        {
            for (int i = left; i <= right; i++)
                ans[(*returnSize)++] = matrix[top][i];
            break;
        }

        if (left != right)
        {
            for (int i = top; i < bottom; i++)
                ans[(*returnSize)++] = matrix[i][right];
        }
        else
        {
            for (int i = top; i <= bottom; i++)
                ans[(*returnSize)++] = matrix[i][right];
            break;
        }

        for (int i = right; i > left; i--)
            ans[(*returnSize)++] = matrix[bottom][i];
        for (int i = bottom; i > top; i--)
            ans[(*returnSize)++] = matrix[i][left];

        top++, bottom--;
        left++, right--;
    }
    return ans;
}
