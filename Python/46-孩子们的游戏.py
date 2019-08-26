# -*- coding:utf-8 -*-
class Solution:
    def LastRemaining_Solution(self, n, m):
        # write code here
        if not n or not m:
            return -1
        data = list(range(n))
        idx = 0
        while n > 1:
            idx = (idx + m - 1) % n
            data.pop(idx)
            n -= 1
            idx = idx % n
        return data[0]