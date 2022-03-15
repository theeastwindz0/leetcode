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
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp=head,*pNode=NULL,*cNode=NULL;
        int ct=1;
        while(temp)
        {
            if(ct==1)
                pNode=temp;
            else if(ct==2)
                cNode=temp;
            
            if(ct==2)
            {
                ct=0;
                swap(pNode->val,cNode->val);
            }
            temp=temp->next;
            ct++;
        }
        
        return head;
    }
};