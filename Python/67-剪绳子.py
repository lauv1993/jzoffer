# -*- coding:utf-8 -*-
class Solution:
    def cutRope(self, number):
        # write code here
        if number < 2:
            return 0
        elif number == 2:
            return 1
        elif number == 3:
            return 2
        x = number % 3
        y = number / 3
        if x == 0:
            return 3 ** y
        elif x == 1:
            return 4 * (3 ** (y - 1))
        else:
            return 2 * (3 ** y)