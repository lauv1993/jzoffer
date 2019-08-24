# -*- coding:utf-8 -*-
class Solution:
    # 返回[a,b] 其中ab是出现一次的两个数字
    def FindNumsAppearOnce(self, array):
        # write code here
        xor = 0
        for i in range(len(array)):
            xor ^= array[i]
        reverse_bin = bin(xor)[2:][::-1]
        lowest_1_index_of_xor = reverse_bin.find('1')
        list0 = filter(lambda x: bin(x)[2:].zfill(len(reverse_bin))[::-1][lowest_1_index_of_xor] == '0', array)
        list1 = filter(lambda x: bin(x)[2:].zfill(len(reverse_bin))[::-1][lowest_1_index_of_xor] == '1', array)
        num1, num2 = 0, 0
        for t in list0:
            num1 ^= t
        for t in list1:
            num2 ^= t
        return [num1, num2]