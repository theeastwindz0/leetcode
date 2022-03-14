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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     if(n==0 ||head==NULL)
         return head;
        
        ListNode *temp=head,*prev=NULL;
        int ct=0,cX=1;
        
        while(temp!=NULL)
        {
            ct++;
            temp=temp->next;
        }
        
        if(ct==n)
        {
            head=head->next;
            return head;
        }
        
        ct=ct-n;
        temp=head;
        while(cX)
        {
            if(cX==ct)
            {
                temp->next=temp->next->next;
                cX=0;
            }
            else{
                temp=temp->next;
                cX++;
            }
        }
        
        
        return head;
    }
};