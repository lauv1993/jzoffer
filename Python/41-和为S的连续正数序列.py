# -*- coding:utf-8 -*-
class Solution:
    def sum(self, a, b):
        return (a + b) * (b - a + 1) / 2

    def FindContinuousSequence(self, tsum):
        # write code here
        res = []
        low, high = 1, 2
        while low < high:
            t = self.sum(low, high)
            if t == tsum:
                res.append(list(range(low, high + 1)))
                low += 1
            elif t < tsum:
                high += 1
            else:
                low += 1
        return res