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
    int kthFactor(int n, int k) {
        if(k==1)return 1;
        int ct=1;
        f(2,n+1){
            if(n%i==0)ct++;
            if(ct==k)return i;
        }
        return -1;
    }
};