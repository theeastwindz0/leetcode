class Solution {
public:
    bool validPalindrome(string s) {
        int ct=0;
        for(int i=0;i<size(s);i++){if(s[i]!=s[size(s)-i-1]){ct++;break;}}
        if(ct==0)return true;
        int f=0,l=size(s)-1;
        ct=0;
        while(f<l){
            if(s[f]==s[l]){f++;l--;}
            else{ct++;f++;}
        }
        f=0,l=size(s)-1;
        int ct2=0;
        while(f<l){
            if(s[f]==s[l]){f++;l--;}
            else {ct2++;l--;}
        }
        if(ct==1 || ct2==1) return true;
        else return false;
    }
};