# -*- coding:utf-8 -*-
class Solution:
    def GetNumberOfK(self, data, k):
        # write code here
        # find leftmost index
        def biSearch(data, key):
            low, high = 0, len(data) - 1
            while low <= high:
                mid = (low + high) // 2
                if data[mid] < key:
                    low = mid + 1
                else:
                    high = mid - 1
            return low
        return biSearch(data, k + 0.5) - biSearch(data, k - 0.5)