struct hashTable
{
    struct ListNode * key;
    UT_hash_handle hh;
};

struct ListNode *detectCycle(struct ListNode * head)
{
    struct hashTable * hash = NULL;
    while (head)
    {
        struct hashTable * tmp = NULL;
        HASH_FIND_PTR(hash, &head, tmp);
        if (tmp)
            return tmp -> key;
        struct hashTable * newHash = malloc(sizeof(struct hashTable));
        newHash -> key = head;
        HASH_ADD_PTR(hash, key, newHash);
        head = head -> next;
    }
    return NULL;
}
