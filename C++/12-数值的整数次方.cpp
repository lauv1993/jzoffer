class Solution {
public:
    double Power(double base, int exponent) {
        if(base == 0)
            return 0;
        if(exponent == 0)
            return 1;
        if(exponent == 1)
            return base;
        int e = abs(exponent);
        double res = 1.0;
        while(e){
            if(e & 1)
                res *= base;
            base *= base;
            e = e >> 1;
        }
        return exponent < 0 ? 1 / res : res;
    }
};
