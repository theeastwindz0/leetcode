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
    long long getDescentPeriods(vector<int>& prices) {
        ll l=0,ans=1;
        f2(r,1,prices.size()){
            // while(prices[l]-prices[r]>1)l++;
            if(prices[r-1]-prices[r]==1)ans+=r-l+1;
            else {ans++;l=r;}
        }
        return ans;
    }
};