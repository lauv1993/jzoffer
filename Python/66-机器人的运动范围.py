# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.cnt = 0

    def movingCount(self, threshold, rows, cols):
        # write code here
        arr = [[1 for _ in range(cols)] for _ in range(rows)]
        self.helper(arr, 0, 0, threshold)
        return self.cnt

    def helper(self, visit, i, j, k):
        if i < 0 or j < 0 or i >= len(visit) or j >= len(visit[0]) or visit[i][j] == 0:
            return
        if sum(map(int, str(i))) + sum(map(int, str(j))) > k:
            return
        self.cnt += 1
        visit[i][j] = 0
        self.helper(visit, i - 1, j, k)
        self.helper(visit, i + 1, j, k)
        self.helper(visit, i, j - 1, k)
        self.helper(visit, i, j + 1, k)