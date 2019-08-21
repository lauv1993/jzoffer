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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> res;
        vector<TreeNode *> list;
        if(root)
            list.push_back(root);
        while(!list.empty()){
            res.push_back(list[0]->val);
            if(list[0]->left)
                list.push_back(list[0]->left);
            if(list[0]->right)
                list.push_back(list[0]->right);
            list.erase(list.begin());
        }
        return res;
    }
};