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
    int orangesRotting(vector<vector<int>>& grid) {
        v<int> dir={0,1,0,-1,0};
        int fresh=0;
        queue<pair<int,int>> q1;
        f(0,grid.size()){
            f2(j,0,grid[0].size()){
                if(grid[i][j]==1)fresh++;
                else if(grid[i][j]==2)q1.push({i,j});
            }
        }
        int ans=-1;
        while(!q1.empty()){
            int len=q1.size();
            ans++;
            f(0,len){
                pair<int,int>p1=q1.front();
                q1.pop();
                f2(j,0,4){
                    int r=p1.first+dir[j];
                    int c=p1.second+dir[j+1];
                    if(r>=0 && c>=0 && r<grid.size() && c<grid[0].size() && grid[r][c]==1){
                        grid[r][c]=2;
                        q1.push({r,c});
                        fresh--;
                    }
                }
            }
        }
        cout<<fresh<<endl;
        if(fresh>0)return -1;
        if(ans==-1)return 0;
        return ans;
    }
};