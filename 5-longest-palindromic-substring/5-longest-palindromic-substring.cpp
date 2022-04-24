class Solution {
public:
    string longestPalindrome(string s) {
        int dp[size(s)][size(s)];
        memset(dp,0,sizeof(dp));
        int  start=0,end=1;
        for(int i=0;i<size(s);i++)dp[i][i]=1;
        for(int i=0;i<size(s)-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                start=i;
                end=2;
            }
        }
        
        for(int i=2;i<size(s);i++){
            for(int j=0;j<size(s)-i;j++){
                int left=j,right=i+j;
                if(dp[left+1][right-1]==1 && s[left]==s[right]){
                    dp[left][right]=1;
                    start=j;
                    end=i+1;
                }
            }
        }
        return s.substr(start,end);        
    }
};
