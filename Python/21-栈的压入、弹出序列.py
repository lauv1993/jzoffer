# -*- coding:utf-8 -*-
class Solution:
    def IsPopOrder(self, pushV, popV):
        # write code here
        verify = []
        j = 0
        for i in range(len(pushV)):
            verify.append(pushV[i])
            while verify and verify[-1] == popV[j]:
                verify.pop()
                j += 1
        return False if verify else True