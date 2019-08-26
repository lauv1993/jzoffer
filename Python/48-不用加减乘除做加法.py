# -*- coding:utf-8 -*-
class Solution:
    def Add(self, num1, num2):
        # write code here
        mask = 0xffffffff
        while num2:
            t = (num1 ^ num2) & mask
            num2 = (num1 & num2) << 1 & mask
            num1 = t
        if num1 <= 0x7fffffff:
            return num1
        else:
            return ~(num1 ^ mask)