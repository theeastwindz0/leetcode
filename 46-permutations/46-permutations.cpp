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
    v<v<int>> ans;
    void solver(int cI,int n,v<int>nums){
        if(cI==n){ans.pb(nums);return;}
        f(cI,n){
            swap(nums[i],nums[cI]);
            solver(cI+1,n,nums);
            swap(nums[i],nums[cI]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solver(0,nums.size(),nums);
        return ans;
    }
};