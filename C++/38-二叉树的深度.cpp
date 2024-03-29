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
    int max(int a, int b)
    {
        return a > b ? a : b;
    }
    int TreeDepth(TreeNode *pRoot)
    {
        if (!pRoot)
            return 0;
        return 1 + max(TreeDepth(pRoot->left), TreeDepth(pRoot->right));
    }
};