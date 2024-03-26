int getValue(char c) {
    switch(c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int romanToInt(char* s) {
    int len = strlen(s);
    int pre = getValue(s[0]), ans = 0;
    for (int i = 1; i < len; i++) {
        if (getValue(s[i]) > pre)
            ans -= pre;
        else
            ans += pre;
        pre = getValue(s[i]);
    }
    ans += pre;
    return ans;
}
