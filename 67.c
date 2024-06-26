void reserve(char * ans, int cnt) {
    int i = 0, j = cnt - 1;
    while (i < j) {
        char tmp = ans[i];
        ans[i] = ans[j];
        ans[j] = tmp;
        i++, j--;
    }
    ans[cnt] = '\0';
}

char* addBinary(char* a, char* b) {
    int lenA = strlen(a), lenB = strlen(b);
    char * ans = malloc(sizeof(char) * (lenA > lenB ? lenA + 2: lenB + 2));
    int arr1[lenA], arr2[lenB];
    for (int i = 0; i < lenA; i++)
        arr1[i] = a[i] - '0';
    for (int i = 0; i < lenB; i++)
        arr2[i] = b[i] - '0';
    int pre = 0;
    int i = lenA - 1, j = lenB - 1;
    int cnt = 0;
    while (true) {
        int sum = 0;
        if (i >= 0)
            sum += arr1[i];
        if (j >= 0)
            sum += arr2[j];
        sprintf(&ans[cnt++], "%d", (sum + pre) % 2);
        pre = (sum + pre) / 2;
        i--, j--;
        if (i < 0 && j < 0) {
            break;
        }
    }
    if (pre) {
        sprintf(&ans[cnt++], "%d", pre);
    }
    ans[cnt] = '\0';
    reserve(ans, cnt);
    return ans;
}
