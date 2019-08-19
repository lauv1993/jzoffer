class Solution:
    # 返回镜像树的根节点
    def Mirror(self, root):
        # write code here
        self.helper(root)
    def helper(self, root):
        if not root:
            return
        root.left, root.right = root.right, root.left
        self.helper(root.left)
        self.helper(root.right)
