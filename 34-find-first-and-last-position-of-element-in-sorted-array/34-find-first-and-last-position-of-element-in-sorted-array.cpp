#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1=-1,ans2=-1;
        f(0,nums.size()){
            if(ans1==-1 && nums[i]==target)ans1=i;
            if(ans1>-1 && nums[i]==target)ans2=i;
        }
        return {ans1,ans2};
    }
};