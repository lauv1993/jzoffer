#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> multiply(const vector<int> &A)
    {
        int n = A.size();
        vector<int> left, right, B;
        left.push_back(1);
        right.push_back(1);
        for (int i = 0; i < n; i++)
            left.push_back(left.back() * A[i]);
        for (int i = n - 1; i >= 0; i--)
            right.push_back(right.back() * A[i]);
        for (int i = 0; i < n; i++)
            B.push_back(left[i] * right[n - i - 1]);
        return B;
    }
};