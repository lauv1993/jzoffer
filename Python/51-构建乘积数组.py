# -*- coding:utf-8 -*-
class Solution:
    def multiply(self, A):
        # write code here
        left, right, B = [1], [1], []
        for i in range(len(A)):
            left.append(left[-1] * A[i])
        for i in range(len(A) - 1, -1, -1):
            right.append(right[-1] * A[i])
        for i in range(len(A)):
            B.append(left[i] * right[len(A) - i - 1])
        return B