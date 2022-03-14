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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode *temp=head;
        int ct=0;
        while(temp)
        {
            ct++;
            temp=temp->next;
        }
        if(ct==1){ temp=NULL; return temp;}
        ct=ct/2;
        
        temp=head;
        while(--ct)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        
        return head;
    }
};