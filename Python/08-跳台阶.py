class Solution:
    def jumpFloor(self, number):
        # write code here
        res = [0, 1, 2, 3]
        while len(res) <= number:
            res.append(res[-1] + res[-2])
        return res[number]
