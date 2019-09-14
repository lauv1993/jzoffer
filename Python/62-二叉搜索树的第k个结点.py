# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    # 返回对应节点TreeNode
    def KthNode(self, pRoot, k):
        # write code here
        lst = []
        def helper(root):
            if not root:
                return
            helper(root.left)
            lst.append(root)
            helper(root.right)
        helper(pRoot)
        if 0 < k <= len(lst):
            return lst[k - 1]
        return None
        