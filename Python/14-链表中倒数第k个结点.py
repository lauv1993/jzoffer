# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def FindKthToTail(self, head, k):
        # write code here
        n = 0;
        p = head;
        while p:
            n += 1;
            p = p.next;
        if k > n:
            return None
        p = head;
        for i in range(n - k):
            p = p.next
        return p
