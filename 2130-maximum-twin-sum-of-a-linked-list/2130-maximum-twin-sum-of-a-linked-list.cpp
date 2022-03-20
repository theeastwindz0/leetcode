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
    int pairSum(ListNode* head) {
        ListNode *temp=head;
        stack <int> st;
        int ct=0,ct2=0,sum=0,ans=0;
        while(temp)
        {
            ct++;
            temp=temp->next;
        }
        temp=head;
        while(temp)
        {
            ct2++;
            sum=0;
            if(ct2<=ct/2)
            {
                st.push(temp->val);
            }
            else
            {
                sum=temp->val+(st.top());
                ans=max(ans,sum);
                st.pop();
            }
            
            temp=temp->next;
        }
        
        return ans;
    }
};