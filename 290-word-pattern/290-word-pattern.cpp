class Solution {
public:
    bool wordPattern(string pattern, string s) {
       unordered_map<char,string> m1;
       unordered_map<string,char> m2;
        int ct=1,idx=0,ct2=0;
        string temp="";
        s+=' ';
        for(int i=0;i<s.size();i++)if(s[i]==' ')ct2++;
        if(ct2!=size(pattern))return false;
        ct2=0;
        while(ct){
            if(s[idx]==' '){
                if(m2.find(temp)!=m2.end() && m2[temp]!=pattern[ct2]) return 0;
                if(m1.find(pattern[ct2])==m1.end()){m2[temp]=pattern[ct2]; m1[pattern[ct2]]=temp;}
                else if(m1[pattern[ct2]]!=temp)return 0;
                temp="";
                ct2++;
            }
            else temp+=s[idx];
            idx++;
            
            if(idx==size(s))break;
                
        }
        for(auto it:m1)cout<<it.first<<" "<<it.second<<endl;
        return true;
    }
};