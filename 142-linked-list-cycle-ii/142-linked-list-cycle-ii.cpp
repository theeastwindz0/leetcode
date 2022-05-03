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
    ListNode *detectCycle(ListNode *head) {
        ListNode *hare=head,*rabbit=head;
        while(hare && hare->next){
            hare=hare->next->next;
            rabbit=rabbit->next;
            if(hare==rabbit){
                rabbit=head;
                while(rabbit!=hare){
                    hare=hare->next;
                    rabbit=rabbit->next;
                }
                return rabbit;
            }
        }
        return NULL;
    }
};