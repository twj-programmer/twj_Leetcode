int maxArea(int* height, int heightSize)
{
    int i = 0, j = heightSize - 1;
    int max = 0;
    while (i < j)
    {
        int currentMax;
        if (height[i] < height[j])
        {
            currentMax = height[i] * (j - i);
            i++;
        }
        else
        {
            currentMax = height[j] * (j - i);
            j--;
        }
        if (max < currentMax) max = currentMax;
    }
    return max;
}
