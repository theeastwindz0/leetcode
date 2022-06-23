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
    vector<vector<int>> construct2DArray(vector<int>& ori, int m, int n) {
        if(ori.size()!=m*n)return {};
        vector<vector<int>> ans(m,vector<int>(n,0));
        int ct=0;
        f(0,m)f2(j,0,n)ans[i][j]=ori[ct++];
        return ans;
    }
};