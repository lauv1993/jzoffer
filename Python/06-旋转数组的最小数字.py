class Solution:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        size = len(rotateArray)
        if size == 0:
            return 0
        if size == 1:
            return rotateArray[0]
        res = rotateArray[0]
        for i in range(size - 1):
            if rotateArray[i] > rotateArray[i + 1]:
                return rotateArray[i + 1]
        return res
