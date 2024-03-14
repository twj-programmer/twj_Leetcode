struct hashTable
{
    int key;
    int val;
    UT_hash_handle hh;
};

int subarraySum(int* nums, int numsSize, int k)
{
    int pre = 0;
    struct hashTable * hash = NULL;
    
    struct hashTable * tmp = malloc(sizeof(struct hashTable));
    tmp -> key = 0;
    tmp -> val = 1;
    HASH_ADD_INT(hash, key, tmp);

    int ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        pre += nums[i];
        int target = pre - k;
        struct hashTable * tmp1 = NULL;
        HASH_FIND_INT(hash, &target, tmp1);
        if (tmp1)
            ans += tmp1 -> val;
        
        struct hashTable * tmp2 = NULL;
        HASH_FIND_INT(hash, &pre, tmp2);
        if (tmp2 == NULL)
        {
            struct hashTable * tmp3 = malloc(sizeof(struct hashTable));
            tmp3 -> key = pre;
            tmp3 -> val = 1;
            HASH_ADD_INT(hash, key, tmp3);
        }
        else
        {
            tmp2 -> val++;
        }
    }
    return ans;
}
