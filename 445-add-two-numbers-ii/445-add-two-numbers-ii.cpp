#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define pb push_back
#define ppb pop_back
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define TN TreeNode
#define LN ListNode
#define endl "\n"
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        v<int>v1,v2,v3;
        while(l1){v1.pb(l1->val);l1=l1->next;}
        while(l2){v2.pb(l2->val);l2=l2->next;}
        int rem=0;
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        f(0,max(v1.size(),v2.size())){
            int x=(i<v1.size())?v1[i]:0;
            int y=(i<v2.size())?v2[i]:0;
            int temp=rem+y+x;
            rem=temp/10;
            v3.pb(temp%10);
        }
        if(rem)v3.pb(rem);
        reverse(v3.begin(),v3.end());
        LN *head=NULL,*tail=NULL;
        f(0,v3.size()){
            LN *temp=new LN(v3[i]);
        if(!head){head=temp;tail=head;}else{tail->next=temp;tail=tail->next;}}
        return head;
    }
};