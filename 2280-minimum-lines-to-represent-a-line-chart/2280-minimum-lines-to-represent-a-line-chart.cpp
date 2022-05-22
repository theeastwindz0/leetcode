#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    int minimumLines(vector<vector<int>>& sp) {
        // v<int>v1;
        //    int a=sp[1][1]-sp[0][1];
        //     int b=sp[1][0]-sp[0][0];
        // int c=0,d=0;
        // f(2,sp.size()-1){
        //      c=sp[i][1]-sp[i-1][1];
        //      d=sp[i][0]-sp[i-1][0];
        //     int m1=a/b;
        //     int m2=c/d;
        //     if(m1==m2)ans++;
        //     a=b;
        //     b=c;
        // }
        sort(sp.begin(),sp.end());
        ll ans=1;
        ll x0 ,x1;
        ll y0 ,y1;
        f(2,sp.size()){
        x0 = sp[i-2][0] , x1 = sp[i-1][0];
        y0 = sp[i-2][1] , y1 = sp[i-1][1];
        ll dx = x1 - x0 , dy = y1 - y0;
        ll x = sp[i][0]-sp[i-1][0] , y = sp[i][1]-sp[i-1][1];
        if(dy*(x) == dx*(y))ans++;
        }
        return sp.size()-ans;
    }
};