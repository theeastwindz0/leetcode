class Solution {
public:
    bool canConstruct(string r, string m) {
//         sort(m.begin(),m.end()); sort(r.begin(),r.end());
//         for(int i=0;i<r.length();i++)if(r[i]!=m[i])return false;        
//         return true;
        
        if(r.length()>m.length()) return false;
        vector<int> v1(26,0);
        for(int i=0;i<m.length();i++)v1[m[i]-97]++;
        for(int i=0;i<r.length();i++)if(--(v1[r[i]-97])<0)return false;
        
        return true;
        
    }
};