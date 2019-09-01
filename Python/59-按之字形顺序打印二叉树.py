# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def Print(self, pRoot):
        # write code here
        if not pRoot:
            return []
        queue = [pRoot]
        l2r = 1
        ret = []
        while queue:
            t_ret = []
            t_queue = []
            for _ in range(len(queue)):
                node = queue.pop(0)
                if l2r:
                    t_ret.append(node.val)
                else:
                    t_ret.insert(0, node.val)
                if node.left:
                    t_queue.append(node.left)
                if node.right:
                    t_queue.append(node.right)
            queue = t_queue
            ret.append(t_ret)
            l2r = 1 - l2r
        return ret