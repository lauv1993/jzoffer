# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def isSymmetrical(self, pRoot):
        # write code here
        if not pRoot:
            return True
        
        def helper(a, b):
            if not a or not b:
                return a == b
            return a.val == b.val and helper(a.left, b.right) and helper(a.right, b.left)
        
        return helper(pRoot.left, pRoot.right)
