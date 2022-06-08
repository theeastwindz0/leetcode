class Solution {
public:
    int removePalindromeSub(string s) {
        if(!size(s))return 0;
        string s2=s;reverse(s.begin(),s.end());
        if(s!=s2)return 2;
        return 1;
    }
};