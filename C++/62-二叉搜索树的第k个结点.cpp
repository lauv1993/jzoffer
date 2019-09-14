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
    void helper(TreeNode *root, vector<TreeNode *> &vt)
    {
        if (!root)
            return;
        helper(root->left, vt);
        vt.push_back(root);
        helper(root->right, vt);
    }
    TreeNode *KthNode(TreeNode *pRoot, int k)
    {
        vector<TreeNode *> ret;
        helper(pRoot, ret);
        if (k <= 0 || k > ret.size())
            return NULL;
        return ret[k - 1];
    }
};