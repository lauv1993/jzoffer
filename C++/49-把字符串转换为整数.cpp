class Solution
{
public:
    int StrToInt(string str)
    {
        bool flag = true;
        int res = 0, base = 1, start = 0, idx = str.size() - 1;
        if (str[0] == '+' || str[0] == '-')
        {
            start++;
            if (str[0] == '-')
                flag = false;
        }
        while (idx >= start)
        {
            if (str[idx] >= '0' && str[idx] <= '9')
            {
                res += base * (str[idx] - '0');
                base *= 10;
                idx--;
            }
            else
                return 0;
        }
        return flag ? res : -res;
    }
};