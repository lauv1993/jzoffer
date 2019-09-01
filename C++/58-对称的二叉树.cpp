/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution
{
public:
    bool helper(TreeNode *a, TreeNode *b)
    {
        if(!a || !b)
            return a == b;
        return a->val == b->val && helper(a->left, b->right) && helper(a->right, b->left);
    }
    bool isSymmetrical(TreeNode *pRoot)
    {
        if(!pRoot)
            return true;
        return helper(pRoot->left, pRoot->right);
    }
};