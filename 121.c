int maxProfit(int* prices, int pricesSize)
{
    int min = 1e4 + 5, max = 0;
    for (int i = 0; i < pricesSize; i++)
    {
        if (min > prices[i])
        {
            min = prices[i];
            continue;
        }
        if (max < prices[i] - min) max = prices[i] - min;
    }
    return max;                                      
}
