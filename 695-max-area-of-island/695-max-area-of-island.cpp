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
    int ct=0;
    int helpme(int i,int j,int iE,int jE,v<v<int>>&v1){
        if(i<0 || j<0 || i>=iE || j>=jE || v1[i][j]!=1)return ct;
        if(v1[i][j]==1)ct++;
        v1[i][j]=2;
        helpme(i+1,j,iE,jE,v1);
        helpme(i-1,j,iE,jE,v1);
        helpme(i,j+1,iE,jE,v1);
        helpme(i,j-1,iE,jE,v1);        
        return ct;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        f(0,grid.size()){
            f2(j,0,grid[0].size()){
                if(grid[i][j]==1){
                    int temp=helpme(i,j,grid.size(),grid[0].size(),grid);
                    ct=0;
                    ans=max(temp,ans);
                 }
            }
        }
        return ans;
    }
};