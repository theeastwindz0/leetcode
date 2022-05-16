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
    void helpme(int cI,int n,int k,v<int>temp)
    {
        if(temp.size()==k){ans.pb(temp);return;}
        f(cI,n){
            temp.pb(i);
            helpme(i+1,n,k,temp);
            temp.ppb();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        helpme(1,n+1,k,{});
        return ans;
    }
};