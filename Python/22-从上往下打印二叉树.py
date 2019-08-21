# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    # 返回从上到下每个节点值列表，例：[1,2,3]
    def PrintFromTopToBottom(self, root):
        # write code here
        res = []
        q = []
        if root:
            q.append(root)
        while q:
            res.append(q[0].val)
            if q[0].left:
                q.append(q[0].left)
            if q[0].right:
                q.append(q[0].right)
            q.pop(0)
        return res