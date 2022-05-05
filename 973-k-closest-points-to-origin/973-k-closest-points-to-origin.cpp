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
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        p<pair<int,int>>p1;
        f(0,points.size()){
           int temp=(points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            p1.push({temp,i});
            if(p1.size()>k)p1.pop();
        }
        v<v<int>>ans;
        
        while(!p1.empty()){
            ans.pb(points[p1.top().second]);
            p1.pop();
        }
        return ans;
    }
};