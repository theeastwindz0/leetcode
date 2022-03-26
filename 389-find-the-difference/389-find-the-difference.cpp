class Solution {
public:
    char findTheDifference(string s, string t) {
        int diff=0;
        for(int i=0;i<s.length();i++) diff=diff+t[i]-s[i];
        diff+=t[s.length()];
        return diff;
    }
};