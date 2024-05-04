bool hasCycle(struct ListNode *head)
{
    if (head == NULL || head -> next == NULL)
        return false;
    struct ListNode * slow = head;
    struct ListNode * fast = head -> next;
    while (fast && fast -> next)
    {
        if (slow == fast)
            return true;
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return false;
}
