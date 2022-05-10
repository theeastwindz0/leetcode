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
    void combo(int cI,int target,int k,v<int>v1,int cu){
        if(target<0)return;
        if(target<0||cI==v1.size())return;
        if(!target && temp.size()==k){ans.pb(temp);return;}
        
        
        combo(cI+1,target,k,v1,cu);
        if(v1[cI]==cu)return;
        cu=v1[cI];
        temp.pb(v1[cI]);
        combo(cI,target-v1[cI],k,v1,cu);
        temp.ppb();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        v<int>v1;
        f(1,10)v1.pb(i);
        combo(0,n,k,v1,0);
        return ans;
    }
};