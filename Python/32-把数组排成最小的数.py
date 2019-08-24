# -*- coding:utf-8 -*-
class Solution:
    def PrintMinNumber(self, numbers):
        # write code here
        string = map(str, numbers)
        numbers = sorted(string, cmp=lambda x, y: int(x + y) - int(y + x))
        return ''.join(numbers)