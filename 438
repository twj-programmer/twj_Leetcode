int* findAnagrams(char * s, char * p, int* returnSize)
{
    *returnSize = 0;
    int sLen = strlen(s), pLen = strlen(p);
    if (pLen > sLen)
        return NULL;
    int book[26] = { 0 };
    for (int i = 0; i < pLen; i++)
        book[p[i] - 'a']++;
    int left = 0, right = pLen - 1;
    int * ans = malloc(sizeof(int) * 30000);
    while (right < sLen)
    {
        int compare[26] = { 0 };
        for (int i = left; i <= right; i++)
            compare[s[i] - 'a']++;
        int flg = 0;
        for (int i = 0; i < 26; i++)
            if (book[i] != compare[i])
            {
                flg = 1;
                break;
            }
        if (!flg)
            ans[(*returnSize)++] = left;
        left++;
        right++;
    }
    return ans;
}
