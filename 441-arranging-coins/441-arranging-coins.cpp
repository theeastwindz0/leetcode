class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)return 1;
        int ct=1,ans=0;
        while(n>=0){
            n-=ct;
            ct++;
            ans++;
        }
        return ans-1;
    }
};