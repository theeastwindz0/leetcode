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
    int minSubArrayLen(int target, vector<int>& nums) {
       ll sum=0;
        int ans=INT_MAX;
        um<ll,int>um1;
        f(0,nums.size()){
            sum+=nums[i];
            if(sum>=target){
                int z=i;
                int temp=0;
                int tg=target;
                while(z>=0 && tg>0){
                    tg-=nums[z--];
                    temp++;
                }
                if(tg<=0)ans=min(temp,ans);
            }
        }
        if(ans==INT_MAX)return 0;
        else return ans;
    }
};