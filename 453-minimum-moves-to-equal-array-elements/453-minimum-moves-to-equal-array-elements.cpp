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
    int minMoves(vector<int>& nums) {
        int ans=0,mi=INT_MAX;
      f(0,nums.size())if(mi>nums[i])mi=nums[i];
        fit(nums)ans+=it-mi;
      return ans;  
    }
};
// 4 5 6
// 5 6 6
// 6 7 6
// 7 7 7