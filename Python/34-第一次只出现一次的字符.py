# -*- coding:utf-8 -*-
class Solution:
    def FirstNotRepeatingChar(self, s):
        # write code here
        for i in range(len(s)):
            if s.count(s[i]) == 1:
                return i
        return -1