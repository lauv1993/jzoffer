# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def __init__(self):
        self.pos = -1
    def Serialize(self, root):
        # write code here
        if not root:
            return '#,'
        return str(root.val) + ',' + self.Serialize(root.left) + self.Serialize(root.right)
    def Deserialize(self, s):
        # write code here
        self.pos += 1
        lst = s.split(',')
        if self.pos == len(s):
            return None
        root = None
        if lst[self.pos] != '#':
            root = TreeNode(int(lst[self.pos]))
            root.left = self.Deserialize(s)
            root.right = self.Deserialize(s)
        return root