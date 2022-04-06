class Solution {
public:
    int firstUniqChar(string s) {
       vector<int> v1(26,0);
        for(int i=0;i<size(s);i++)v1[s[i]-97]++;
        for(int i=0;i<size(s);i++)if(v1[s[i]-97]==1)return i;
        return -1;
    }
};