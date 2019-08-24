class Solution
{
public:
    int total(int a, int b)
    {
        return (a + b) * (b - a + 1) / 2;
    }
    vector<vector<int>> FindContinuousSequence(int sum)
    {
        int low = 1, high = 2;
        vector<vector<int>> res;
        while (low < high)
        {
            if (total(low, high) == sum)
            {
                vector<int> t;
                for (size_t i = low; i <= high; i++)
                    t.push_back(i);
                res.push_back(t);
                low++;
            }
            else if (total(low, high) < sum)
                high++;
            else
                low++;
        }
        return res;
    }
};