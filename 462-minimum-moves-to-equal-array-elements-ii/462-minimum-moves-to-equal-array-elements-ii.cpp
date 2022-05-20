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
    int minMoves2(vector<int>& nums) {
        // int sum=accumulate(nums.begin(),nums.end(),0),avg=0,ans=0;
        // f(0,nums.size())if(nums[i]>=sum/nums.size()){avg=nums[i];break;}
        // cout<<avg<<endl;
        sort(nums.begin(),nums.end());
        int ans=0,avg=nums[nums.size()/2];
        f(0,nums.size())ans+=abs(nums[i]-avg);
        return ans;
    }
};

// 1 2 9 10
// 8 7 0 1