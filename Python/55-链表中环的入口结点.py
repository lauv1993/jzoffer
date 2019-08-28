# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    def EntryNodeOfLoop(self, pHead):
        # write code here
        if not pHead or not pHead.next or not pHead.next.next:
            return None
        slow = pHead.next
        fast = pHead.next.next
        while slow != fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        if slow == fast:
            slow = pHead
            while slow != fast:
                slow = slow.next
                fast = fast.next
            return slow
        return None