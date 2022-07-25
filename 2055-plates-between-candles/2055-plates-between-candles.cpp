class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int>v1,ans;
        for(int i=0;i<s.size();i++)if(s[i]=='|')v1.push_back(i);
        for(int i=0;i<size(queries);i++){
            int x=lower_bound(v1.begin(),v1.end(),queries[i][0])-v1.begin();
            int y=upper_bound(v1.begin(),v1.end(),queries[i][1])-v1.begin()-1;
            if(x<y)ans.push_back(v1[y]-v1[x]-(y-x));
            else ans.push_back(0);
        }
        
        return ans;
    }
};