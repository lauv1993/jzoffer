class Solution
{
public:
    vector<int> data;
    void Insert(int num)
    {
        data.push_back(num);
        sort(data.begin(), data.end());
    }

    double GetMedian()
    {
        int n = data.size();
        if (n & 1)
            return data[n / 2];
        else
            return 0.5 * (data[n / 2 - 1] + data[n / 2]);
    }
};