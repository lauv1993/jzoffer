# -*- coding:utf-8 -*-
class Solution:
    def StrToInt(self, s):
        # write code here
        flag = True
        start = 0
        res = 0
        if not s:
            return 0
        if s[0] in '+-':
            start = 1
            if s[0] == '-':
                flag = False
        base = 1
        idx = len(s) - 1
        while idx >= start:
            if s[idx].isdigit():
                res += base * int(s[idx])
                base *= 10
                idx -= 1
            else:
                return 0
        return res if flag else -res