class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s2="";
        for(int i=0;i<size(s);i++){
            if(s[i]=='#'){
                if(i==0)continue;
                if(size(s2)>0)s2.pop_back();
            }
            else s2.push_back(s[i]);
        }
        s="";
          for(int i=0;i<size(t);i++){
            if(t[i]=='#'){
                if(i==0)continue;
                if(size(s)>0)s.pop_back();
            }
            else s.push_back(t[i]);
        }
        if(s==s2)return 1;
        else return 0;
    }
};