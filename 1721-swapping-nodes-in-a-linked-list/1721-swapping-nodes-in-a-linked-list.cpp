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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)
            return head;
        ListNode *temp=head;
        int ct=0,ct2=1;
        while(temp)
        {
            ct++;
            temp=temp->next;
        }
        temp=head;
        ListNode *beg=NULL,*end=NULL;
        while(temp)
        {
            if(ct2==k)
                beg=temp;
            if(ct2==ct-k+1)
            end=temp;
                        
            temp=temp->next;
            
            ct2++;
        }
        swap(beg->val,end->val);
        
        return head;
    }
};