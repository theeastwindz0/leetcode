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
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        v<v<int>>v1;
        f(0,matrix[0].size()){
            v<int>temp;
            f2(j,0,matrix.size())temp.pb(matrix[j][i]);v1.pb(temp);
        }
        return v1;
    }
};