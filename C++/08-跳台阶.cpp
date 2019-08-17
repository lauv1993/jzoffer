class Solution {
public:
    int jumpFloor(int number) {
        if(number <= 3)
            return number;
        int res = 0, i = 4;
        int first = 2, second = 3;
        while(i <= number){
            int t = second;
            second += first;
            first = t;
            ++i;
        }
        return second;
    }
};
