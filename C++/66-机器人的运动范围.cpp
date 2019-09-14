#include <vector>
using namespace std;
class Solution
{
public:
    int cnt;
    int rows;
    int cols;
    int movingCount(int threshold, int rows, int cols)
    {
        vector<bool> tmp(cols, false);
        vector<vector<bool> > arr(rows, tmp);
        cnt = 0;
        this->cols = cols;
        this->rows = rows;
        helper(arr, 0, 0, threshold);
        return cnt;
    }
    void helper(vector<vector<bool> > &visit, int i, int j, int key)
    {
        if (i < 0 || j < 0 || i >= rows || j >= cols || visit[i][j] == true)
            return;
        if (getSum(i) + getSum(j) > key)
            return;
        visit[i][j] = true;
        cnt++;
        helper(visit, i - 1, j, key);
        helper(visit, i + 1, j, key);
        helper(visit, i, j - 1, key);
        helper(visit, i, j + 1, key);
    }
    int getSum(int x)
    {
        int ret = 0;
        while (x)
        {
            ret += x % 10;
            x /= 10;
        }
        return ret;
    }
};