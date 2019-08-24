# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def IsBalanced_Solution(self, root):
        # write code here
        if not root:
            return True
        if abs(self.TreeDepth(root.left) - self.TreeDepth(root.right)) <= 1:
            return self.IsBalanced_Solution(root.left) and self.IsBalanced_Solution(root.right)
        return False
        
    def TreeDepth(self, root):
        if not root:
            return 0
        return max(self.TreeDepth(root.left), self.TreeDepth(root.right)) + 1