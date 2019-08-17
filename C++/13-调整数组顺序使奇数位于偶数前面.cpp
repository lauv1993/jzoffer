class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int len = array.size();
        int i, j;
        for(i = 0; i < len; i++){
            for(j = len - 1; j > i; j--){
                if((array[j] % 2 == 1) && (array[j - 1] % 2 == 0)){
                    int t = array[j];
                    array[j] = array[j - 1];
                    array[j - 1] = t;
                }
            }
        }
    }
};
