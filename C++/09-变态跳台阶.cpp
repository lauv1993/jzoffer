class Solution {
public:
    int jumpFloorII(int number) {
        int res = 1;
        while(--number)
            res *= 2;
        return res;
    }
};
