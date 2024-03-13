struct ListNode *detectCycle(struct ListNode *head)
{
    if (head == NULL || head -> next == NULL)
        return NULL;
    struct ListNode * slow = head;
    struct ListNode * fast = head;
    while (fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        if (fast == slow)
        {
            struct ListNode * ptr = head;
            while (slow != ptr)
            {
                slow = slow -> next;
                ptr = ptr -> next;
            }
            return ptr;
        }
    }
    return NULL;
}
