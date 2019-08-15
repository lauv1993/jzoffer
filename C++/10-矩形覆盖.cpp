class Solution {
public:
    int rectCover(int number) {
        if(number <= 3)
            return number;
        int first = 2, second = 3;
        while(--number >= 3){
            int t = second;
            second += first;
            first = t;
        }
        return second;
    }
};
