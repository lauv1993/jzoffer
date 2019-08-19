class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        helper(pRoot);
    }
    void helper(TreeNode *root){
        if(!root)
            return;
        TreeNode *p = 0;
        p = root->right;
        root->right = root->left;
        root->left = p;
        helper(root->left);
        helper(root->right);
    }
};
