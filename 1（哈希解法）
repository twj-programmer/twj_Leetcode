struct HashTable
{
    int key;
    int val;
    UT_hash_handle hh;//必备照抄
};

//二级指针是为了可以修改哈希表
struct HashTable * find(struct HashTable ** hashTable, int ikey)
{
    struct HashTable * tmp;
    HASH_FIND_INT(*hashTable, &ikey, tmp);
    return tmp;
}

void insert(struct HashTable ** hashTable, int ikey, int ival)
{
    /*
    struct hashTable* it = find(ikey);
    if (it == NULL) {
        struct hashTable* tmp = malloc(sizeof(struct hashTable));
        tmp->key = ikey, tmp->val = ival;
        HASH_ADD_INT(hashtable, key, tmp);
    } else {
        it->val = ival;
    }
    */ // 判断是否有重复元素，更新元素下标
    struct HashTable * tmp = malloc(sizeof(struct HashTable));
    tmp -> key = ikey;
    tmp -> val = ival;
    HASH_ADD_INT(*hashTable, key, tmp);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    struct HashTable * hashTable = NULL;
    for (int i = 0; i < numsSize; i++)
    {
        struct HashTable * it = find(&hashTable, target - nums[i]);
        if (it != NULL)
        {
            int * ret = malloc(sizeof(int) * 2);
            ret[0] = it -> val;
            ret[1] = i;
            *returnSize = 2;
            return ret;
        }
        insert(&hashTable, nums[i], i);
    }
    *returnSize = 0;
    return NULL;
}
