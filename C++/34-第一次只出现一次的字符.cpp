class Solution
{
public:
    int FirstNotRepeatingChar(string str)
    {
        unsigned int storage[256] = {0};
        for (int i = 0; i < str.size(); i++)
            storage[str[i]]++;
        for (int i = 0; i < str.size(); i++)
            if (storage[str[i]] == 1)
                return i;
        return -1;
    }
};