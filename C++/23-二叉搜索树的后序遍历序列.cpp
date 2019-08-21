class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.empty())
            return false;
        return helper(sequence, 0, sequence.size() - 1);
    }
    
    bool helper(vector<int> s, int low, int high){
        if(low >= high)
            return true;
        int pivot = high - 1;
        while(low <= pivot && s[pivot] > s[high])
            --pivot;
        for(int i = low; i <= pivot; i++)
            if(s[i] > s[high])
                return false;
        return helper(s, low, pivot) && helper(s, pivot + 1, high - 1);
    }
};