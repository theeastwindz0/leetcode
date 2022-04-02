class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
       for(int i=0;i<size(s);i++){
           if(s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
           if((s[i]!=' ' && s[i]>=97 && s[i]<=122)||(s[i]>=48 && s[i]<=57))s1.push_back(s[i]);
           } 
        cout<<size(s1)/2;
        
        for(int i=0;i<size(s1)/2;i++){if(s1[i]!=s1[size(s1)-i-1])return false;}
        return true;
    }
};