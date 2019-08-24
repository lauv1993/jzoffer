#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string PrintMinNumber(vector<int> numbers)
    {
        sort(numbers.begin(), numbers.end(), cmp);
        string res = "";
        for (size_t i = 0; i < numbers.size(); i++)
        {
            res += to_string(numbers[i]);
        }
        return res;
    }

    static bool cmp(int a, int b)
    {
        return to_string(a) + to_string(b) < to_string(b) + to_string(a);
    }
};