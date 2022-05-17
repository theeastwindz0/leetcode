#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        v<int>dp(cost.size());
        dp[0]=cost[0];dp[1]=cost[1];
        f(2,cost.size()){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[dp.size()-1],dp[dp.size()-2]);
    }
};