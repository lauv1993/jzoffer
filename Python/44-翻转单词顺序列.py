# -*- coding:utf-8 -*-
class Solution:
    def ReverseSentence(self, s):
        # write code here
        s = s.split(' ')[::-1]
        return ' '.join(s)