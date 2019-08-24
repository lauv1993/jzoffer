class Solution
{
public:
    bool flag;
    bool IsBalanced_Solution(TreeNode *pRoot)
    {
        flag = true;
        TreeDepth(pRoot);
        return flag;
    }

    int max(int a, int b)
    {
        return a >= b ? a : b;
    }

    int TreeDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = TreeDepth(root->left);
        int right = TreeDepth(root->right);
        if (abs(left - right) > 1)
        {
            flag = false;
        }
        return 1 + max(left, right);
    }
};