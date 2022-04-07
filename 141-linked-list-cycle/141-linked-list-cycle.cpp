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
    bool hasCycle(ListNode *head) {
        ListNode *hare=head,*rabbit=head;
        while(hare!=NULL && hare->next!=NULL){
            hare=hare->next->next;
            rabbit=rabbit->next;
            if(hare==rabbit)return 1;
        }
        return 0;
    }
};