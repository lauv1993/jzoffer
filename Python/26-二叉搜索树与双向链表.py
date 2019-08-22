# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def Convert(self, pRootOfTree):
        # write code here
        if not pRootOfTree:
            return None
        pre = [None]
        self.helper(pRootOfTree, pre)
        res = pRootOfTree
        while res.left:
            res = res.left
        return res

    def helper(self, cur, pre):
        if not cur:
            return
        self.helper(cur.left, pre)
        cur.left = pre[0]
        if pre[0]:
            pre[0].right = cur
        pre[0] = cur
        self.helper(cur.right, pre)
