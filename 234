bool isPalindrome(struct ListNode* head)
{
    struct ListNode * tmp = head;
    int cnt = 0;
    while (tmp)
    {
        cnt++;
        tmp = tmp -> next;
    }
    int * nums = malloc(sizeof(int) * cnt);
    int size = 0;
    while (head)
    {

        nums[size++] = head -> val;
        head = head -> next;
    }
    for (int i = 0, j = size - 1; i < j; i++, j--)
        if (nums[i] != nums[j]) return false;
    return true;
}
