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
#define ts to_string
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,sum=0;
        um<int,int>um1={{0,1}};
        f(0,nums.size()){
            //FOR FUTURE REFERENCE 
            // finding remainder , extra k is added so there won't be any negative no in um
            sum=(sum+nums[i]%k+k)%k;
            ans+=um1[sum];
            um1[sum]++;
            cout<<sum<<endl;
        }
        return ans;
    }
};