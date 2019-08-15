class Solution:
    def NumberOf1(self, n):
        # write code here
        return bin(n & 0xffffffff).replace('0b', '').count('1')
