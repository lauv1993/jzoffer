class Solution
{
public:
    int Add(int num1, int num2)
    {
        int MIN = 0xffffffff;
        int mask = 0xffffffff;
        while (num2){
            int t = (num1 ^ num2) & mask;
            num2 = (num1 & num2) << 1 & mask;
            num1 = t;
        }
        return num1;
    }
};