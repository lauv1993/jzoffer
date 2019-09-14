# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.data = []
    def Insert(self, num):
        # write code here
        if not self.data:
            self.data.append(num)
        else:
            i = 0
            while i < len(self.data):
                if num <= self.data[i]:
                    break
                i += 1
            self.data.insert(i, num)
    def GetMedian(self, _):
        # write code here
        n = len(self.data)
        if n & 1 == 1:
            return self.data[n / 2]
        else:
            return 0.5 * (self.data[n / 2] + self.data[n / 2 - 1])