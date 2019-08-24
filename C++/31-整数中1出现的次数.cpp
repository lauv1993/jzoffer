class Solution
{
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int res = 0, m = 1;
        while (m <= n)
        {
            int a = n / m, b = n % m;
            res += (a + 8) / 10 * m + (a % 10 == 1) * (b + 1);
            m *= 10;
        }
        return res;
    }
};