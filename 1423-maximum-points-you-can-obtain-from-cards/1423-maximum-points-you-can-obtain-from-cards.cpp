#define f(a,b) for(int i=a;i<b;i++)
class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
       int ans=0,temp=0;
        f(0,k)ans+=cp[i];
        temp=ans;
        for(int i=k-1,j=cp.size()-1;i>=0;i--,j--)temp+=cp[j]-cp[i],ans=max(ans,temp);
        return ans;
    }
};