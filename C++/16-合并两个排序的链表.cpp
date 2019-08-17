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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode head = ListNode(0);
        ListNode *p1 = pHead1, *p2 = pHead2, *p = &head;
        if(!p1)
            return p2;
        if(!p2)
            return p1;
        while(p1 && p2){
            if(p1->val <= p2->val){
                p->next = p1;
                p = p1;
                p1 = p1->next;
            }
            else{
                p->next = p2;
                p = p2;
                p2 = p2->next;
            }
        }
        if(p1)
            p->next = p1;
        else
            p->next = p2;
        return head.next;
    }
};
