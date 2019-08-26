# -*- coding:utf-8 -*-
class Solution:
    # 这里要特别注意~找到任意重复的一个值并赋值到duplication[0]
    # 函数返回True/False
    # 2 3 1 0 2 5 3
    def duplicate(self, numbers, duplication):
        # write code here
        n = len(numbers)
        for i in range(0, n):
            cur = numbers[i]
            if cur == i:
                continue
            if cur == numbers[cur]:
                duplication[0] = cur
                return True
            else:
                numbers[cur], numbers[i] = numbers[i], numbers[cur]
        return False