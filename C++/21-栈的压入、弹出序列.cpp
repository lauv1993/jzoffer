class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int len = pushV.size(), j = 0;
        vector<int> verify;
        for(int i = 0; i < pushV.size(); ++i){
            verify.push_back(pushV[i]);
            while(!verify.empty() && verify.back() == popV[j]){
                verify.pop_back();
                ++j;
            }
        }
        return verify.empty() ? true : false;
    }
};