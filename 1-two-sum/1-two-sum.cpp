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
    vector<int> twoSum(vector<int>& nums, int target) {
        um<int,int>um1;
        f(0,nums.size()){
            if(um1.find(target-nums[i])!=um1.end())return{i,um1[target-nums[i]]};
            um1[nums[i]]=i;
        }
        return {};
    }
};