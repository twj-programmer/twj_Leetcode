char* longestCommonPrefix(char** strs, int strsSize) {
    int cnt = 0;
    char * ans = malloc(sizeof(char) * 200);
    int i, j;
    for (i = 0; i < strlen(strs[0]); i++) {
        int flg = 1;
        for (j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[j - 1][i]) {
                flg = 0;
                break;
            }
        }
        if (flg)
            ans[cnt++] = strs[0][i];
        else
            break;
    }
    ans[cnt] = '\0';
    return ans;
}
/* AI
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }
    
    int minLen = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int len = strlen(strs[i]);
        if (len < minLen) {
            minLen = len;
        }
    }

    char *ans = (char*)malloc(sizeof(char) * (minLen + 1));
    int cnt = 0;

    for (int i = 0; i < minLen; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c) {
                ans[cnt] = '\0';
                return ans;
            }
        }
        ans[cnt++] = c;
    }

    ans[cnt] = '\0';
    return ans;
}
*/
