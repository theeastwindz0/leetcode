class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        vector<int>v1;
        // for(int i=0;i<n;i++)for(int j=0;j<n;j++)cout<<ans[i][j];
        int ct=1;
        for(int i=0;i<n*n;i++)v1.push_back(ct++);
        
        int t=0,b=n-1,l=0,r=n-1,dir=0;
        ct=0;
        while(t<=b && l<=r){
            if(dir==0){
                for(int i=l;i<=r;i++)ans[t][i]=v1[ct++];
                t++;
            }else if(dir==1){
                for(int i=t;i<=b;i++)ans[i][r]=v1[ct++];
                r--;
            }else if(dir==2){
                for(int i=r;i>=l;i--)ans[b][i]=v1[ct++];
                b--;
            }else if(dir==3){
                for(int i=b;i>=t;i--)ans[i][l]=v1[ct++];
                l++;
            }
            dir=(dir+1)%4;
        }
        
        return ans;
    }
};