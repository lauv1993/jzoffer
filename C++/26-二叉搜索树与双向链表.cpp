/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution
{
public:
    TreeNode *Convert(TreeNode *pRootOfTree)
    {
        if(pRootOfTree == nullptr)
            return nullptr;
        TreeNode* pre = nullptr;
        helper(pRootOfTree, pre);
        TreeNode* res = pRootOfTree;
        while(res->left)
            res = res->left;
        return res;
    }

    void helper(TreeNode *cur, TreeNode *&pre)
    {
        if(cur == nullptr)
            return;
        helper(cur->left, pre);
        cur->left = pre;
        if(pre)
            pre->right = cur;
        pre = cur;
        helper(cur->right, pre);
    }
};