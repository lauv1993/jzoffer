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
    vector<vector<int>> Print(TreeNode *pRoot)
    {
        vector<vector<int>> ret;
        queue<TreeNode *> q;
        if (!pRoot)
            return ret;
        q.push(pRoot);
        while (!q.empty())
        {
            queue<TreeNode *> t_q;
            vector<int> t_ret;
            while (!q.empty())
            {
                TreeNode *node = q.front();
                q.pop();
                t_ret.push_back(node->val);
                if (node->left)
                    t_q.push(node->left);
                if (node->right)
                    t_q.push(node->right);
            }
            q = t_q;
            ret.push_back(t_ret);
        }
        return ret;
    }
};