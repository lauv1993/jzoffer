# -*- coding:utf-8 -*-
class Solution:
    def maxInWindows(self, num, size):
        # write code here
        if size < 1 or size > len(num):
            return []
        pre = max(num[:size])
        ret = [pre]
        for i in range(size, len(num)):
            if num[i] >= num[i - size]:
                pre = max(num[i], pre)
            else:
                pre = max(num[i - size + 1:i + 1])
            ret.append(pre)
        return ret
