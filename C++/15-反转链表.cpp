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
    ListNode* ReverseList(ListNode* pHead) {
        ListNode *rear = 0;
        ListNode* p = pHead, *q = 0;
        while(p){
            q = p->next;
            p->next = rear;
            rear = p;
            p = q;
        }
        p = q = 0;
        return rear;
    }
};
