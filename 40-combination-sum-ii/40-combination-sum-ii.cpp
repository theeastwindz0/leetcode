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
    v<v<int>>ans;
    void helper(v<int>can,int cI,int target,v<int>temp){
        if(target==0){ans.pb(temp);return;}
        if(target<0)return;
        f(cI,can.size()){
            if(i!=cI && can[i-1]==can[i])continue;{
                temp.pb(can[i]);
                helper(can,i+1,target-can[i],temp);
                temp.ppb();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        sort(can.begin(),can.end());
        helper(can,0,target,{});
        return ans;
    }
};