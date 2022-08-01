class Solution {
public:
//     int ansFinder(int i,int j,int n,int m, vector<vector<int>>&dp){
//     if(i==(n-1) && j==(m-1))return 1;
//         if(i>=n || j>=m)return 0;
        
//         if(dp[i][j]!=-1)return dp[i][j];
//         else return dp[i][j]=ansFinder(i+1,j,n,m,dp)+ansFinder(i,j+1,n,m,dp);
//     }
    
    int uniquePaths(int m, int n) {
        // vector<vector<int>>v1(n,vector<int>(m,-1));
        // return ansFinder(0,0,n,m,v1);
        int  N=n+m-2;
        int r=n-1;
        double res=1;
        
        for(int i=1;i<=r;i++)res=res*(N-r+i)/i;
        return (int)res;
    }
};