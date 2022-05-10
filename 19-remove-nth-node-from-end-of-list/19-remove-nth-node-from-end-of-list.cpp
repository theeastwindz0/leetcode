
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     if(n==0 ||head==NULL) return head;
        // if(head->next==NULL && n==1)return NULL;
        int ct=0;
        ListNode *temp=head;
        while(temp)ct++,temp=temp->next;
        if(ct==n)return head=head->next;
        ct=ct-n;
        temp=head;
        while(ct){
            if(ct==1)temp->next=temp->next->next;
            temp=temp->next;
            ct--;
        }
        return head;
    }
};