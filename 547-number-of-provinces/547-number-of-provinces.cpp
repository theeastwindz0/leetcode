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
    void helpme(int i, v<v<int>> &grid ,v<bool> &vis){
        vis[i]=true;
        v<int>adj;
        f2(j,0,grid.size()){
            if(grid[i][j]==1)adj.pb(j);
        }
        fit(adj)if(vis[it]==0)helpme(it,grid,vis);
    }
    int findCircleNum(vector<vector<int>>& grid) {
        int ans=0;
        v<bool>vis(grid.size(),false);
        f(0,grid.size()){
            if(vis[i]==0){helpme(i,grid,vis);ans++;}
        }
        return ans;
    }
};