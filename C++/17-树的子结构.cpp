/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        TreeNode *p1 = pRoot1, *p2 = pRoot2;
        if(!p1 || !p2)
            return false;
        bool result = false;
        if(p1->val == p2->val)
            result = helper(p1, p2);
        if(!result)
            result = HasSubtree(p1->left, p2);
        if(!result)
            result = HasSubtree(p1->right, p2);
        return result;
    }
    
    bool helper(TreeNode* p1, TreeNode* p2){
        if(!p2)
            return true;
        if(!p1)
            return false;
        if(p1->val == p2->val)
            return helper(p1->left, p2->left) and helper(p1->right, p2->right);
        return false;
    }
};
