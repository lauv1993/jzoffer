# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    # 返回二维列表[[1,2],[4,5]]
    def Print(self, pRoot):
        # write code here
        if not pRoot:
            return []
        ret = []
        queue = [pRoot]
        while queue:
            t_queue = []
            t_ret = []
            while queue:
                node = queue.pop(0)
                t_ret.append(node.val)
                if node.left:
                    t_queue.append(node.left)
                if node.right:
                    t_queue.append(node.right)
            queue = t_queue
            ret.append(t_ret)
        return ret