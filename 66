int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1;
    while (i >= 0 && digits[i] == 9) {
        digits[i] = 0;
        i--;
    }
    if (i == -1) {
        int * ans = malloc(sizeof(int) * (digitsSize + 1));
        memset(ans, 0, sizeof(int) * (digitsSize + 1));
        ans[0] = 1;
        *returnSize = digitsSize + 1;
        return ans;
    }
    digits[i] += 1;
    *returnSize = digitsSize;
    return digits;
}
