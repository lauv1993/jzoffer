# -*- coding:utf-8 -*-
class Solution:
    def Permutation(self, ss):
        # write code here
        if not ss:
            return []
        res = set()
        
        def helper(res, ss, t):
            if not ss:
                res.add(t)
            for i in range(len(ss)):
                t += ss[i]
                helper(res, ss[:i] + ss[i + 1:], t)
                t = t[:-1]
        
        helper(res, ss, '')
        return sorted(list(res))