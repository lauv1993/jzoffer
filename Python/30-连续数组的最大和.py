# -*- coding:utf-8 -*-
class Solution:
    def FindGreatestSumOfSubArray(self, array):
        # write code here
        if len(array) == 1:
            return array[0]
        res = array[0]
        cur = res if res > 0 else 0
        for i in range(1, len(array)):
            cur += array[i]
            if cur > res:
                res = cur
            if cur < 0:
                cur = 0
        return res