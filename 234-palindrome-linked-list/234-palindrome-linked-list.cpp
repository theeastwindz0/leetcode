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
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        int ct=0,ct2=0;
        while(temp){ct++;temp=temp->next;}
        temp=head;
        stack<int>st;
        while(ct2!=ct/2)
        {
            st.push(temp->val);
            ct2++;
            temp=temp->next;
        }
        if(ct%2!=0)ct=0;
        while(temp)
        {
            if(ct)
            {
                if(st.top()!=temp->val)
                    return false;
                st.pop();
            }
            temp=temp->next;
                ct++;
        }
        return true;
    }
};