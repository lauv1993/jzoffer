/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/

#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<vector<int>> FindPath(TreeNode *root, int expectNumber)
    {
        helper(root, expectNumber);
        return res;
    }
    void helper(TreeNode *root, int num)
    {
        if (!root || root->val > num)
            return;
        path.push_back(root->val);
        if (!root->left && !root->right && root->val == num)
            res.push_back(path);
        else
        {
            if (root->left)
                helper(root->left, num - root->val);
            if (root->right)
                helper(root->right, num - root->val);
        }
        path.pop_back();
    }
};