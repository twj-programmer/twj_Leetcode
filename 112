bool hasPathSum(struct TreeNode* root, int targetSum)
{
    if (root == NULL)
        return false;
    
    if (targetSum == root -> val && root -> left == NULL && root -> right == NULL)
        return true;
    return hasPathSum(root -> left, targetSum - root -> val) || hasPathSum(root -> right, targetSum - root -> val);
}
