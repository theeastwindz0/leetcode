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
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        v<int>dp(nums.size()+1);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        f(2,nums.size())dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        return dp[nums.size()-1];
    }
};