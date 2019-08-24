class Solution
{
public:
    int GetNumberOfK(vector<int> data, int k)
    {
        return biSearch(data, k + 0.5) - biSearch(data, k - 0.5);
    }
    int biSearch(vector<int> data, double key)
    {
        int low = 0, high = data.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (data[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};