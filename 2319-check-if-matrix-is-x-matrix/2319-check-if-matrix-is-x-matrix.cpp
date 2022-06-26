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
    bool checkXMatrix(vector<vector<int>>& grid) {
        f(0,grid.size())if(grid[i][i]==0)return false;
        f(0,grid.size())if(grid[i][grid.size()-i-1]==0)return false;
        f(0,grid.size()){grid[i][i]=0;grid[i][grid.size()-i-1]=0;}
        f(0,grid.size())f2(j,0,grid[0].size())if(grid[i][j]!=0)return false;
        return true;
    }
};