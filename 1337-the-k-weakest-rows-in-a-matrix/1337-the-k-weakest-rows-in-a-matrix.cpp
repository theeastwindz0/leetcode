class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      vector<int>v1;
      set<pair<int,int>>s1;
        for(auto i=0;i<mat.size();i++)
        {
            accumulate(mat[i].begin(),mat[i].end(),0);
            s1.insert(make_pair(accumulate(mat[i].begin(),mat[i].end(),0),i));
        }
        for (auto it = s1.begin(); it != s1.end(),k>0;k--,it++)
            v1.push_back(it->second);
        
        return v1;
    }
};