# -*- coding:utf-8 -*-
class Solution:
    def GetUglyNumber_Solution(self, index):
        # write code here
        if index < 7:
            return index
        id2, id3, id5 = 0, 0, 0
        res = [1]
        for _ in range(1, index):
            res.append(min(res[id2] * 2, res[id3] * 3, res[id5] * 5))
            if res[id2] * 2 == res[-1]: id2 += 1
            if res[id3] * 3 == res[-1]: id3 += 1
            if res[id5] * 5 == res[-1]: id5 += 1
        return res[index - 1]