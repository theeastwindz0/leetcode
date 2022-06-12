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
    int maximumUniqueSubarray(vector<int>& nums) {
        set<int> s1;
        int l=0,ans=0,best=0;
        f(0,nums.size()){
            while(s1.find(nums[i])!=s1.end()){
                best-=nums[l];
                s1.erase(nums[l++]);
            }
            s1.insert(nums[i]);
            best+=nums[i];
            ans=max(ans,best);
        }
        return ans;
    }
};