class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        int ct=0,ct2=0;
        for(int i=0;i<s1.length();i++)
            if(s1[i]!=s2[i]) ct++;
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        for(int i=0;i<s1.length();i++)
            if(s1[i]!=s2[i]) ct2++;
        
        if(ct2==0 && ct==2)
            return true;
        else return false;
        
        
    }
};