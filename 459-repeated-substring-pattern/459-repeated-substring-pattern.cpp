class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length()==1)return false;
       for(int i=1;i<=s.length()/2;i++){
           if(s.length()%i==0){
               string s1="";
               for(int j=0;j<i;j++)s1.push_back(s[j]);
               string s2="";
                for(int k=0;k<(s.length()/i);k++)s2+=s1;
               if(s2==s)return true;
           }
       }
        return false;
    }
};

