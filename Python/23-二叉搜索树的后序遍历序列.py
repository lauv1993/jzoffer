# -*- coding:utf-8 -*-
class Solution:
    def VerifySquenceOfBST(self, sequence):
        # write code here
        if not sequence:
            return False
        def helper(s, low, high):
            if low >= high:
                return True
            pivot = high - 1
            while pivot >= low and s[pivot] > s[high]:
                pivot -= 1
            for i in range(low, pivot + 1):
                if s[i] > s[high]:
                    return False
            return helper(s, low, pivot) and helper(s, pivot + 1, high - 1)
        return helper(sequence, 0, len(sequence) - 1)