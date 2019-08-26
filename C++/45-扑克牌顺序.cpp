class Solution
{
public:
    bool IsContinuous(vector<int> numbers)
    {
        if (numbers.size() != 5)
            return false;
        int min = 14, max = -1, flag = 0;
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] == 0)
                continue;
            if ((flag >> numbers[i]) & 1 == 1)
                return false;
            flag = flag | (1 << numbers[i]);
            min = numbers[i] < min ? numbers[i] : min;
            max = numbers[i] > min ? numbers[i] : max;
            if (max - min > 4)
                return false;
        }
        return true;
    }
};