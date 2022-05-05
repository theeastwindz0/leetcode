#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        v<bool>visited(n,false);
        f(0,edges.size()){
            visited[edges[i][1]]=true;
        }
        v<int>ans;
        f(0,visited.size())if(!visited[i])ans.pb(i);
        
        return ans;
    }
};