/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // a1 a1 c1 c2 c3 b1 b2 b3 || c1 ||
        // b1 b2 b3 c1 c2 c3 a1 a2 || c1 || ans
        ListNode *t1=headA,*t2=headB;
        while(t1!=t2){
            t1=(t1)?t1->next:headB;
            t2=(t2)?t2->next:headA;
        }
        
        return t1;
    }
};


