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
        q.push(pRoot);
        if (!pRoot)
            return ret;
        int l2r = 1;
        while (!q.empty())
        {
            vector<int> t_ret;
            queue<TreeNode *> t_q;
            while (!q.empty())
            {
                TreeNode *node = q.front();
                q.pop();
                if (l2r)
                    t_ret.push_back(node->val);
                else
                    t_ret.insert(t_ret.begin(), node->val);
                if (node->left)
                    t_q.push(node->left);
                if (node->right)
                    t_q.push(node->right);
            }
            q = t_q;
            ret.push_back(t_ret);
            l2r = 1 - l2r;
        }
        return ret;
    }
};