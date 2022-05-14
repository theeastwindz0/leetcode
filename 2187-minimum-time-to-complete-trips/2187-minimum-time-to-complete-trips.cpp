#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        ll left=1,right=1+1e14,ans=0;
        while(left<=right){
            ll m=(right-left)/2+left;
            ll ct=0;
            fit(time)ct+=m/it;
            if(ct>=totalTrips){right=m-1;ans=m;}
            else left=m+1;
        }
        return ans;
    }
};