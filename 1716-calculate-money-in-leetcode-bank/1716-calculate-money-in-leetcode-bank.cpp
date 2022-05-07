#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    int totalMoney(int n) {
        int tWeeks=n/7;
        int lDays=n%7;
        int ans=0;
        f(1,tWeeks+1)ans+=7*(i+3);
        f(1,lDays+1)ans+=i+tWeeks;
        return ans;
    }
};

// 1 2 3 4 5 6 7   28/7=4
// 2 3 4 5 6 7 8   35/4=5
// 3 4 5 6 7 8 9   42/7=6
// 4 5 6 7 8 9 10  49/7=7