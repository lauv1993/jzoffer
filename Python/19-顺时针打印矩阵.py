# -*- coding:utf-8 -*-
class Solution:
    # matrix类型为二维列表，需要返回列表
    def printMatrix(self, matrix):
        # write code here
        r1, r2, c1, c2 = 0, len(matrix) - 1, 0, len(matrix[0]) - 1
        res = []
        while r1 <= r2 and c1 <= c2:
            for j in range(c1, c2 + 1):
                res.append(matrix[r1][j])
            r1 += 1
            if r1 > r2: break
            for i in range(r1, r2 + 1):
                res.append(matrix[i][c2])
            c2 -= 1
            if c1 > c2: break
            for j in range(c2, c1 - 1, -1):
                res.append(matrix[r2][j])
            r2 -= 1
            if r1 > r2: break
            for i in range(r2, r1 - 1, -1):
                res.append(matrix[i][c1])
            c1 += 1
            if c1 > c2: break
        return res
