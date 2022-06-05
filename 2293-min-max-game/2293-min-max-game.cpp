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
    int minMaxGame(vector<int>& nums) {
        bool mmi=true;
        while(nums.size()!=1){
        v<int>v1;
            for(int i=0;i<nums.size();i+=2){
                if(mmi)v1.pb(min(nums[i],nums[i+1]));
                else v1.pb(max(nums[i],nums[i+1]));
                mmi=!mmi;
            }
            nums=v1;
        }
        return nums[0];
    }
};