/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution
{
public:
    TreeLinkNode *GetNext(TreeLinkNode *pNode)
    {
        if (pNode->right)
        {
            pNode = pNode->right;
            while (pNode->left)
                pNode = pNode->left;
            return pNode;
        }
        while (pNode->next)
        {
            TreeLinkNode *pre = pNode->next;
            if(pre->left == pNode)
                return pre;
            pNode = pre;
        }
        return NULL;
    }
};