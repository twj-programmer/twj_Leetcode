struct ListNode* swapPairs(struct ListNode * head)
{
    if (head == NULL || head -> next == NULL)
        return head;
    struct ListNode * pre = head -> next;
    struct ListNode * suf = head;
    while (pre)
    {
        int tmp = pre -> val;
        pre -> val = suf -> val;
        suf -> val = tmp;
        if (pre -> next == NULL)
            return head;
        pre = pre -> next -> next;
        suf = suf -> next -> next;
    }
    return head;
}
