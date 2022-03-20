/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *newHead=NULL;
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
        {
            newHead=head;
            return head;
        }
        reverseList(head->next);
        ListNode *nx=head->next;
        nx->next=head;
        head->next=NULL;
        
        return newHead;
        
    }
};