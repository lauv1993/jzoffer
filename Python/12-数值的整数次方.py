class Solution:
    def Power(self, base, exponent):
        # write code here
        if not base:
            return 0
        if not exponent:
            return 1
        if exponent == 1:
            return base
        e = abs(exponent)
        res = 1
        while e:
            if e & 1:
                res *= base
            base *= base
            e = e >> 1
        return res if exponent > 0 else 1 / res
