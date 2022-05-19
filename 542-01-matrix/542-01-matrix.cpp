#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    v<int>dir={0,1,0,-1,0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       queue<pair<int,int>> q1;
        f(0,mat.size()){
            f2(j,0,mat[0].size())
                if(mat[i][j]==0)q1.emplace(i,j);
                else mat[i][j]=-1;
        }
        while(!q1.empty()){
            auto[r,c]=q1.front();
            q1.pop();
            f(0,4){
                int r1=dir[i]+r,c1=dir[i+1]+c;
                if(r1<0 || c1<0 ||r1==mat.size() || c1==mat[0].size() || mat[r1][c1]!=-1)continue;
                mat[r1][c1]=mat[r][c]+1;
                q1.emplace(r1,c1);
            }
        }
        return mat;
    }
};