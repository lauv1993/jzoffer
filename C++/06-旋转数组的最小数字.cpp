class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int len = rotateArray.size();
        if(len == 0)
            return 0;
        if(len == 1)
            return rotateArray[0];
        int res = rotateArray[0];
        for(int i = 0; i < len - 1; i++){
            if(rotateArray[i] > rotateArray[i + 1])
                return rotateArray[i + 1];
        }
        return res;
    }
};
