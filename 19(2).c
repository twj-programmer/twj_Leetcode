struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode * suf = head;
    struct ListNode * pre = head;
    for (int i = 0; i < n - 1; i++)
        pre = pre -> next;
    if (pre -> next == NULL)
        return head -> next;
    while (pre -> next != NULL)
    {
        pre = pre -> next;
        if (pre -> next == NULL)
            suf -> next = suf -> next -> next;
        suf = suf -> next;
    }
    return head;
}
