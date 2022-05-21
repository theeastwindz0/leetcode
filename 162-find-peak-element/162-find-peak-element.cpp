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
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)return 0;
        f(0,nums.size()){
            int l=(i==0)?INT_MIN:nums[i-1];
            int r=(i==nums.size()-1)?INT_MIN:nums[i+1];
            if(nums[i]>l && nums[i]>r)return i;
        }
        return -1;
    }
};