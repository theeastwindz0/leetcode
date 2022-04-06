class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){if(s[i]!=t[i])return false;}
        return true;
        // int x=0,y=0;
        // for(int i=0;i<s.size();i++){x+=s[i];y+=t[i];}
        // if(x==y)return true;
        // else return false;
        
    }
};