class Solution {
public:
    int countBalls(int ll, int hl) {
      // int tb=hl-ll+1;
        vector<int>v1(46,0);
        int ans=0;
        for(int i=ll;i<hl+1;i++){
            int tb=i,sum=0;
        while(tb!=0)sum+=tb%10,tb/=10;
            ans=max(++v1[sum],ans);
        }
        return ans;
    }
};