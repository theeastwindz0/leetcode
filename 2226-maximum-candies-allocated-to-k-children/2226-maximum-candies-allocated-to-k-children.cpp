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
    int maximumCandies(vector<int>& candies, long long k) {
       int right=0;
        fit(candies)right=max(right,it);
        int left=0;
        while(left<right){
            int m=(left+right+1)/2;
            ll sum=0;
            fit(candies)sum+=it/m;
            if(sum>=k)left=m;
            else right=m-1;
        }
        return left;
    }
};