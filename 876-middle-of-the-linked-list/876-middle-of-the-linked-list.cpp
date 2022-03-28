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
    ListNode* middleNode(ListNode* head) {
        int ct=0;
        ListNode *temp=head;
        while(temp){ct++;temp=temp->next;}
        temp=head;
        ct=ct/2;
        while(ct){temp=temp->next;ct--;}
        return temp;
    }
};