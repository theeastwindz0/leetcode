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
    int getDecimalValue(ListNode* head) {
        int ct=0,sum=0;
        ListNode *temp=head;
        while(temp){ ct++;temp=temp->next;}
        temp=head;
        while(ct){
            sum+=pow(2,ct-1)*temp->val;
            ct--;temp=temp->next;
        }
        return sum;
    }
};