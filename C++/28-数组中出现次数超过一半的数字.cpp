class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int cnt = 1, cur = numbers[0];
        for(int i = 1; i < numbers.size(); ++i){
            if(cur == numbers[i])
                cnt++;
            else{
                cnt--;
                if(cnt == 0){
                    cnt = 1;
                    cur = numbers[i];
                }
            }
        }
        cnt = 0;
        for(int i = 0; i < numbers.size(); ++i)
            if(numbers[i] == cur)
                cnt++;
        if(cnt > numbers.size() / 2)
            return cur;
        return 0;
    }
};