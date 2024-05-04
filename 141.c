struct hashTable
{
    struct ListNode * key;
    UT_hash_handle hh;
};

bool hasCycle(struct ListNode *head)
{
    struct hashTable * hash = NULL;
    while (head)
    {   //先找再插
        //先查找
        struct hashTable * tmp = NULL;
        HASH_FIND_PTR(hash, &head, tmp);
        if (tmp)
            return true;
        //创建新哈希表并插入
        struct hashTable * newHash = malloc(sizeof(struct hashTable));
        newHash -> key = head;
        HASH_ADD_PTR(hash, key, newHash);
        //更新head
        head = head -> next;
    }
    return false;
}
