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
    bool hasAlternatingBits(int n) {
        int last=n%2;
        n=n/2;
        while(n!=0){
            int temp=n%2;
            if(temp==last)return 0;
            last=temp;n=n/2;
        }
        return 1;
    }
};