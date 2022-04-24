class Solution {
public:
    string reverseStr(string s, int k) {
        string ans="";
        int ct=k;
        for(int i=0;i<size(s);i++){
            int start=i;
            int end=(size(s)>i+k)?i+k:size(s);
            if(ct==k){reverse(s.begin()+start,s.begin()+end);ct=-1;i=i+k-1;}
            ct++;
        }
        
        return s;
    }
};