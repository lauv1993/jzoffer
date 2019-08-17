# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def HasSubtree(self, pRoot1, pRoot2):
        # write code here
        p1, p2 = pRoot1, pRoot2
        if not p1 or not p2:
            return False
        result = False
        if p1.val == p2.val:
            result = self.helper(p1, p2)
        if not result:
            result = self.HasSubtree(p1.left, p2)
        if not result:
            result = self.HasSubtree(p1.right, p2)
        return result
    
    def helper(self, p1, p2):
        if not p2:
            return True
        if not p1:
            return False
        if p1.val == p2.val:
            return self.helper(p1.left, p2.left) and self.helper(p1.right, p2.right)
        else:
            return False
