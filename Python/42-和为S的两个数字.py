# -*- coding:utf-8 -*-
class Solution:
    def FindNumbersWithSum(self, array, tsum):
        # write code here
        i, j = 0, len(array) - 1
        while i <= j:
            t = array[i] + array[j]
            if t == tsum:
                return [array[i], array[j]]
            elif t < tsum:
                i += 1
            else:
                j -= 1
        return []