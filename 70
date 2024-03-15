int climbStairs(int n)
{
    int dp1 = 0, dp2 = 0, dp = 1;
    for (int i = 1; i <= n; i++)
    {
        dp1 = dp2;
        dp2 = dp;
        dp = dp1 + dp2;
    }
    return dp;
}
