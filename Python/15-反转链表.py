# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    # 返回ListNode
    def ReverseList(self, pHead):
        # write code here
        rear = None
        p = pHead
        while p:
            q = p.next
            p.next = rear
            rear = p
            p = q
        return rear
