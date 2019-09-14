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
    void SerializeHelper(TreeNode *root, string &s)
    {
        if(root == NULL)
        {
            s += "#,";
            return;
        }
        s += to_string(root->val) + ',';
        SerializeHelper(root->left, s);
        SerializeHelper(root->right, s);
    }
    TreeNode *DeserializeHelper(string &s)
    {
        if(s.length() == 0)
            return NULL;
        if(s[0] == '#')
        {
            s = s.substr(2);
            return NULL;
        }
        TreeNode *ret = new TreeNode(stoi(s));
        s = s.substr(s.find_first_of(',') + 1);
        ret->left = DeserializeHelper(s);
        ret->right = DeserializeHelper(s);
        return ret;
    }
    char *Serialize(TreeNode *root)
    {
        if(root == NULL)
            return NULL;
        string s = "";
        SerializeHelper(root, s);
        char *ret = new char[s.length() + 1];
        strcpy(ret, s.c_str());
        return ret;
    }
    TreeNode *Deserialize(char *str)
    {
        if(str == NULL)
            return NULL;
        string s(str);
        return DeserializeHelper(s);
    }
};