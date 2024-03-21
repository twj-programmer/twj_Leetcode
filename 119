int* getRow(int rowIndex, int* returnSize)
{
    int * ans = malloc(sizeof(int) * (rowIndex + 1));
    memset(ans, 0, sizeof(int) * (rowIndex + 1));
    ans[0] = 1;
    for (int i = 0; i <= rowIndex; i++)
    {
        int pre = 0;
        for (int j = 0; j <= i; j++)
        {
            int tmp = ans[j];
            ans[j] = pre + ans[j];
            pre = tmp;
        }   
    }
    *returnSize = rowIndex + 1;
    return ans;
}
