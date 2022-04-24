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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *head=NULL,*tail=NULL;
        int sum=0,rem=0;
        while(l1!=NULL || l2!=NULL)
        {
            int x=(l1!=NULL)?l1->val:0;
            int y=(l2!=NULL)?l2->val:0;
            
            sum=x+y+rem;
            
            ListNode *temp=new ListNode();
            temp->val=sum%10;
            if(head==NULL)
            {
                head=temp;
                tail=temp;
            }
            else
            {
                tail->next=temp;
                tail=temp;
            }
            rem=sum/10;
            
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;

        }
        
        if(rem!=0)
        {
            ListNode *temp=new ListNode();
            temp->val=rem;
            tail->next=temp;
        }
        
        return head;
    }
};