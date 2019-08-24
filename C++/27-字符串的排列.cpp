class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> res;
        if (str.size() == 0)
            return res;
        helper(res, str, "");
        set<string> filter;
        for(size_t i = 0; i < res.size(); ++i){
            filter.insert(res[i]);
        }
        res.clear();
        for(set<string>::iterator it = filter.begin(); it != filter.end(); ++it){
            res.push_back(*it);
        }
        return res;
    }
    
    void helper(vector<string> &group, string str, string tmp){
        if(str.size() == 0){
            group.push_back(tmp);
            return;
        }
        for(size_t i = 0; i < str.size(); ++i){
            tmp.push_back(str[i]);
            string backup;
            backup += str[i];
            str.erase(i, 1);
            helper(group, str, tmp);
            str.insert(i, backup);
            tmp.pop_back();
        }
    }
};