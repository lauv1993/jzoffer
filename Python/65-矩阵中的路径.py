# -*- coding:utf-8 -*-
class Solution:
    def hasPath(self, matrix, rows, cols, path):
        # write code here
        visit = [0] * (rows * cols)
        def helper(i, j, k):
            idx = i * cols + j
            if i < 0 or i >= rows or j < 0 or j >= cols or visit[idx] or matrix[idx] != path[k]:
                return False
            if k == len(path) - 1:
                return True
            visit[idx] = True
            if helper(i - 1, j, k + 1):
                return True
            if helper(i + 1, j, k + 1):
                return True
            if helper(i, j - 1, k + 1):
                return True
            if helper(i, j + 1, k + 1):
                return True
            visit[idx] = False
            return False
        for i in range(rows):
            for j in range(cols):
                if helper(i, j, 0):
                    return True
        return False