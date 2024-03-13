struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode * suf = head;
    struct ListNode * pre = head;
    for (int i = 0; i < n - 1; i++)
        pre = pre -> next;
    if (pre -> next == NULL)
        return head -> next;
    struct ListNode * preSuf;
    while (pre -> next != NULL)
    {
        pre = pre -> next;
        preSuf = suf;
        suf = suf -> next;
    }
    preSuf -> next = suf -> next;
    return head;
}
