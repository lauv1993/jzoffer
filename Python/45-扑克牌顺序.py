# -*- coding:utf-8 -*-
class Solution:
    def IsContinuous(self, numbers):
        # write code here
        if len(numbers) != 5:
            return False
        flag = 0
        MIN = 14
        MAX = -1
        for x in numbers:
            if x < 0 or x > 13:
                return False
            if x == 0:
                continue
            if (flag >> x) & 1 == 1:
                return False
            flag = flag or (1 << x)
            MIN = min(MIN, x)
            MAX = max(MAX, x)
            if MAX - MIN > 4:
                return False
        return True