# -*- coding:utf-8 -*-
class Solution:
    def NumberOf1Between1AndN_Solution(self, n):
        # write code here
        res, m = 0, 1
        while m <= n:
            a, b = n // m, n % m
            res += (a + 8) / 10 * m + (a % 10 == 1) * (b + 1)
            m *= 10
        return res