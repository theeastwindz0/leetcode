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
    bool checkPossibility(vector<int>& nums) {
        int ct=0,sm=INT_MAX;
        f(1,nums.size())
            if(nums[i]<nums[i-1]){
                ct++;
                if(ct==2)sm=max(sm,nums[i]);
             if(ct==2 || (i>1 && i<nums.size()-1 && nums[i-2]>nums[i] && nums[i+1]<nums[i-1]))return false;
            }
        return true;
    }
};
