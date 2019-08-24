#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int min(int a, int b, int c)
    {
        a = a < b ? a : b;
        return a < c ? a : c;
    }
    int GetUglyNumber_Solution(int index)
    {
        int id2 = 0, id3 = 0, id5 = 0;
        vector<int> res;
        res.push_back(1);
        for (size_t i = 1; i < index; i++)
        {
            res.push_back(min(res[id2] * 2, res[id3] * 3, res[id5] * 5));
            if (res[id2] * 2 == res.back())
                id2++;
            if (res[id3] * 3 == res.back())
                id3++;
            if (res[id5] * 5 == res.back())
                id5++;
        }
        return res[index - 1];
    }
};