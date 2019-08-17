/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* p = pListHead;
        int n = 0;
        while(p){
            ++n;
            p = p->next;
        }
        p = pListHead;
        if(k > n)
            return 0;
        for(int i = 0; i < n - k; ++i)
            p = p->next;
        return p;
    }
};
