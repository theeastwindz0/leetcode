#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(it,nums) for(auto &it:nums)
#define v vector

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>> v1(n+1);
        f(0,trust.size()){
            v1[trust[i][0]].first++;
            v1[trust[i][1]].second++;
        }
        int ans=-1,ct=0;
        fit(it,v1){
            if(it.second==n-1 && it.first==0)
                ans=ct;
            // cout<<it.first<<" "<<it.second<<endl;
            ct++;
        }
        return ans;
        
    }
};