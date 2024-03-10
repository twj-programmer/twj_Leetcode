struct HashTable
{
    int key;//数值
    int val;//下标-
    UT_hash_handle hh;//必备照抄
};

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    struct HashTable * hashTable = NULL;
    for (int i = 0; i < numsSize; i++)
    {
        struct HashTable * it;
        int goal = target - nums[i];
        HASH_FIND_INT(hashTable, &goal, it);
        if (it != NULL)
        {
            int * ret = malloc(sizeof(int) * 2);
            ret[0] = it -> val;
            ret[1] = i;
            *returnSize = 2;
            return ret;
        }
        struct HashTable * tmp = malloc(sizeof(struct HashTable));
        tmp -> key = nums[i];
        tmp -> val = i;
        HASH_ADD_INT(hashTable, key, tmp);
    }
    *returnSize = 0;
    return NULL;
}
