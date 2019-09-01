/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution
{
public:
    ListNode *deleteDuplication(ListNode *pHead)
    {
        ListNode newHead = ListNode(0);
        newHead.next = pHead;
        ListNode *preHead = &newHead;
        ListNode *pre = preHead, *cur = pHead;
        while (cur)
        {
            while(cur->next && cur->next->val == cur->val)
                cur = cur->next;
            if(pre->next == cur)
                pre = pre->next;
            else
                pre->next = cur->next;
            cur = cur->next;   
        }
        return preHead->next;
    }
};