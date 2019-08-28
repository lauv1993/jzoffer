# -*- coding:utf-8 -*-
class Solution:
    # 返回对应char
    def __init__(self):
        self.ch = [0] * 256
        self.q = []
    def FirstAppearingOnce(self):
        # write code here
        while self.q and self.ch[ord(self.q[0])] > 1:
            self.q.pop(0)
        if not self.q:
            return '#'
        return self.q[0]
    def Insert(self, char):
        # write code here
        self.ch[ord(char)] += 1
        if self.ch[ord(char)] == 1:
            self.q.append(char)