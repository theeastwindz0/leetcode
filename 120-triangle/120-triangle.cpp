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
    int minimumTotal(vector<vector<int>>& tri) {
        fr(tri.size()-2,0){
            f2(j,0,i+1){
                tri[i][j]+=min(tri[i+1][j],tri[i+1][j+1]);
            }
        }
        return tri[0][0];
    }
};