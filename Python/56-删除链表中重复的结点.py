# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    def deleteDuplication(self, pHead):
        # write code here
        new = ListNode(0)
        new.next = pHead
        pre, cur = new, pHead
        while cur:
            while cur.next and cur.next.val == cur.val:
                cur = cur.next
            if cur == pre.next:
                pre = pre.next
            else:
                pre.next = cur.next
            cur = cur.next
        return new.next