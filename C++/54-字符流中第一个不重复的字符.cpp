class Solution
{
public:
    queue<int> q;
    int cnt[256];
    //Insert one char from stringstream
    void Insert(char ch)
    {
        cnt[ch]++;
        if (cnt[ch] == 1)
            q.push(ch);
    }
    //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        while (q.size() > 0 && cnt[q.front()] > 1)
            q.pop();
        if (q.size() == 0)
            return '#';
        return q.front();
    }
};