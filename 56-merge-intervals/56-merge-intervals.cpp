class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intr) {
       vector<vector<int>> v1;
        int ct=0;
        sort(intr.begin(),intr.end());
        for(int i=1;i<intr.size();i++){
            // if(intr[i][0]<=intr[i-1][1])v1.push_back({intr[i-1][0],intr[i][1]});
            // else v1.push_back({intr[i][0],intr[i][1]});
            
            if(intr[i][0]<=intr[i-1][1]){
                intr[i][0]=min(intr[i-1][0],intr[i][0]);
                intr[i][1]=max(intr[i-1][1],intr[i][1]);
                ct++;
                intr[i-1][0]=-1;
                intr[i-1][1]=-1;
            }
        }
        for(auto it:intr)if(it[0]!=-1)v1.push_back({it[0],it[1]});
        return v1;
    }
};