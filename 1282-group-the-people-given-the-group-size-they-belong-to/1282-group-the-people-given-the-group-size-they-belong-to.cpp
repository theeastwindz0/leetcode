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
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        um<int,v<int>>um1;
        v<v<int>> ans;
        f(0,groupSizes.size()){
            um1[groupSizes[i]].pb(i);
            if(um1[groupSizes[i]].size()==groupSizes[i]){
                ans.pb(um1[groupSizes[i]]);
                um1.erase(groupSizes[i]);
            }
        }
        
        return ans;
        
    }
};