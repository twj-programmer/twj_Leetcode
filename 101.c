bool cheek(struct TreeNode * p, struct TreeNode * q)
{
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p -> val == q -> val)
        return cheek(p -> left, q -> right) && cheek(p -> right, q -> left);
    else
        return false;
}

bool isSymmetric(struct TreeNode* root)
{
    return cheek(root, root);
}
