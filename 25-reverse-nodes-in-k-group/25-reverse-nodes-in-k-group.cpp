#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
       LN *curr=head;
        f(0,k){
            if(!curr)return head;
                curr=curr->next;
        }
        LN *prev=NULL;
        LN *next1=NULL;
        curr=head;
        f(0,k){
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        if(next1)head->next=reverseKGroup(next1,k);
        return prev;
    }
};