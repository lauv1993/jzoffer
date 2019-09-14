class Solution
{
public:
    int max(int a, int b)
    {
        return a >= b ? a : b;
    }
    int multi_max(const vector<int> &num, int start, int end)
    {
        int ret = num[start];
        for (int i = start + 1; i <= end; ++i)
            ret = max(ret, num[i]);
        return ret;
    }
    vector<int> maxInWindows(const vector<int> &num, unsigned int size)
    {
        vector<int> ret;
        if (size < 1 || size > num.size())
            return ret;
        int pre = multi_max(num, 0, size - 1);
        ret.push_back(pre);
        for (int i = size; i < num.size(); ++i)
        {
            if (num[i] >= num[i - size])
                pre = max(num[i], pre);
            else
                pre = multi_max(num, i - size + 1, i);
            ret.push_back(pre);
        }
        return ret;
    }
};