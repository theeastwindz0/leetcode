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
    
    void helpme(int i,int j,int iE,int jE,v<v<char>>&grid){
        if(i<0 || j<0 || i>=iE || j>=jE || grid[i][j]=='0')return;
        grid[i][j]='0';
        helpme(i+1,j,iE,jE,grid);
        helpme(i-1,j,iE,jE,grid);
        helpme(i,j+1,iE,jE,grid);
        helpme(i,j-1,iE,jE,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
       int ans=0; 
        f(0,grid.size()){
            f2(j,0,grid[0].size()){
                if(grid[i][j]=='1'){ans++;helpme(i,j,grid.size(),grid[0].size(),grid);} 
            }
        }
        return ans;
    }
};