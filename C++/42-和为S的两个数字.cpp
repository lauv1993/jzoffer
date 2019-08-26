class Solution
{
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum)
    {
        vector<int> res;
        int i = 0, j = array.size() - 1;
        while (i <= j)
        {
            int t = array[i] + array[j];
            if (t == sum)
            {
                res.push_back(array[i]);
                res.push_back(array[j]);
                return res;
            }
            else if (t < sum)
                i++;
            else
                j--;
        }
        return res;
    }
};