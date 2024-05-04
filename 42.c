int trap(int* height, int heightSize)
{
    int ans = 0;
    int i = 0, j = heightSize - 1;
    int pre_max = 0, suf_max = 0;
    while (i <= j)
    {
        if (height[i] > pre_max)
            pre_max = height[i];
        if (height[j] > suf_max)
            suf_max = height[j];
        if (pre_max < suf_max)
        {
            ans += pre_max - height[i];
            i++;
        }
        else
        {
            ans += suf_max - height[j];
            j--;
        }
    }
    return ans;
}
