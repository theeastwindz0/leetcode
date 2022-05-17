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
    int tribonacci(int n) {
        v<int>v1(38);
        v1[0]=0;v1[1]=1;v1[2]=1;
        f(3,n+1)v1[i]=v1[i-1]+v1[i-2]+v1[i-3];
        return v1[n];
    }
};