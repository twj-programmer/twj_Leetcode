int * getNext(char * needle) {
    int len = strlen(needle);
    int * next = malloc(sizeof(int) * len);
    next[0] = 0;
    for (int i = 1, j = 0; i < len; i++) {
        while (j > 0 && needle[i] != needle[j])
            j = next[j - 1];
        if (needle[i] == needle[j])
            j++;
        next[i] = j;
    }
    return next;
}

int strStr(char* haystack, char* needle) {
    int * next = getNext(needle);
    int lenH = strlen(haystack), lenN = strlen(needle);
    for (int i = 0, j = 0; i < lenH; i++) {
        while (j > 0 && haystack[i] != needle[j])
            j = next[j - 1];
        if (haystack[i] == needle[j])
            j++;
        if (j == lenN)
            return i - j + 1;
    }
    return -1;
}
