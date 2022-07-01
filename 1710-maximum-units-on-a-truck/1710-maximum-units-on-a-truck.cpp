#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define pb push_back
#define ppb pop_back
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define TN TreeNode
#define LN ListNode
#define endl "\n"
class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int ts) {
        int ans=0;
        sort(bt.begin(),bt.end(),[&](vector<int> &a,vector<int> &b){return a[1]>b[1];});
        f(0,bt.size()){
            if(bt[i][0]<ts){ts-=bt[i][0];ans+=bt[i][1]*bt[i][0];}
            else {ans+=ts*bt[i][1];ts=0;}
            if(ts==0)break;
        }
        return ans;
    }
};