class Solution
{
public:
    int FindGreatestSumOfSubArray(vector<int> array)
    {
        int res = 0x80000000;
        int cur = 0;
        for (int i = 0; i < array.size(); ++i)
        {
            cur += array[i];
            if (cur > res)
                res = cur;
            if (cur <= 0)
                cur = 0;
        }
        return res;
    }
};