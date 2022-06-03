#define f(a,b) for(int i=a;i<b;i++)
class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int ans=0,p=0;
        f(0,rungs.size())ans+=(rungs[i]-p-1)/dist,p=rungs[i];
        return ans;
    }
};