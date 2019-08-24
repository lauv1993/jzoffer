class Solution
{
public:
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2)
    {
        int xor_res = 0;
        for (int i = 0; i < data.size(); i++)
        {
            xor_res ^= data[i];
        }
        int lowest_1_index_of_xor = 0;
        while ((xor_res & 1) == 0)
        {
            ++lowest_1_index_of_xor;
            xor_res = xor_res >> 1;
        }
        for (int i = 0; i < data.size(); i++)
        {
            if (!compare_onebit(data[i], lowest_1_index_of_xor))
                *num1 ^= data[i];
            else
                *num2 ^= data[i];
        }
    }
    bool compare_onebit(int num, int index)
    {
        num = num >> index;
        return num & 1;
    }
};
