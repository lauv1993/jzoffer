# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    # 返回二维列表，内部每个列表表示找到的路径
    def FindPath(self, root, expectNumber):
        # write code here
        if not root:
            return []
        res = []
        def helper(root, path, num):
            path.append(root.val)
            if not root.left and not root.right and root.val == num:
                res.append(path[:])
            elif root.val > num:
                return
            else:
                if root.left:
                    helper(root.left, path, num - root.val)
                if root.right:
                    helper(root.right, path, num - root.val)
            path.pop()
        helper(root, [], expectNumber)
        res = sorted(res, key=lambda x:len(x), reverse=True)
        return res