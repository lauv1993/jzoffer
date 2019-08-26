class Solution
{
public:
    int LastRemaining_Solution(int n, int m)
    {
        if (n == 0 or m == 0)
            return -1;
        vector<int> data;
        for (int i = 0; i < n; i++)
            data.push_back(i);
        int idx = 0;
        while (n > 1)
        {
            idx = (idx + m - 1) % n;
            data.erase(data.begin() + idx);
            n--;
            idx = idx % n;
        }
        return data[0];
    }
};