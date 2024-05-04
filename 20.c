char match(char a)
{
    if (a == '}') return '{';
    if (a == ']') return '[';
    if (a == ')') return '(';
    return 0;
}

bool isValid(char* s)
{
    int n = strlen(s);
    if (n % 2 == 1) return false;
    int stack[n + 1], top = 0;
    for (int i = 0; i < n; i++)
    {
        char tmp = match(s[i]);
        if (tmp)
        {
            if (top == 0 || stack[top - 1] != tmp)
                return false;
            top--;
        }
        else
        {
            stack[top++] = s[i];
        }
    }
    return top == 0;
}
