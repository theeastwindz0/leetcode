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
    v<int>temp;
    v<v<int>>ans;
    void helpme(v<int>nums,int cI){
        if(cI==nums.size()){ans.pb(temp);return;}
            helpme(nums,cI+1);
            temp.pb(nums[cI]);
            helpme(nums,cI+1);
            temp.ppb();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        helpme(nums,0);
        return ans;
    }
};