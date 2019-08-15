class Solution:
    def rectCover(self, number):
        # write code here
        res = [0, 1, 2, 3]
        i = 3
        while i < number:
            res.append(res[-1] + res[-2])
            i += 1
        return res[number]
