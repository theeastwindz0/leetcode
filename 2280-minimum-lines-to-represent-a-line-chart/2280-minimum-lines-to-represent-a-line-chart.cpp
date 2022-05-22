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
        if(sp.size()<2)return 0;
        ll ans=1;
        sort(sp.begin(),sp.end());
       ll a,b,c,d;
        f(2,sp.size()){
         a=sp[i-1][0]-sp[i-2][0];
         b=sp[i-1][1]-sp[i-2][1];
         c=sp[i][0]-sp[i-1][0];
         d=sp[i][1]-sp[i-1][1];
         if((b*c)!=(a*d))ans++; 
        }
        return ans;
    }
};