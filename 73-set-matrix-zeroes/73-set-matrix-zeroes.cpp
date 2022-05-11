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
#define ts to_string
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        v<v<int>>v1;
       f2(i,0,matrix.size())
           f2(j,0,matrix[0].size())
               if(matrix[i][j]==0)v1.pb({i,j});
        f(0,v1.size()){
            f2(j,0,matrix[0].size())matrix[v1[i][0]][j]=0;
            f2(j,0,matrix.size())matrix[j][v1[i][1]]=0;
        }
    }
};