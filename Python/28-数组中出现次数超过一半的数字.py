# -*- coding:utf-8 -*-
class Solution:
    def MoreThanHalfNum_Solution(self, numbers):
        # write code here
        n = len(numbers)
        cur = numbers[0]
        cnt = 1
        for i in range(1, n):
            if numbers[i] == cur:
                cnt += 1
            else:
                cnt -= 1
                if cnt == 0:
                    cur = numbers[i]
                    cnt = 1
        if numbers.count(cur) > n // 2:
            return cur
        return 0