class Solution {
public:
    long long appealSum(string s) {
        vector<int> v1(26,0);
        long long ans=0;
        for(int i=0;i<size(s);i++){
            v1[s[i]-'a']=i+1;
            for(int j='a';j<='z';j++){
                ans+=v1[j-'a'];
            }
        }
        return ans;
    }
};