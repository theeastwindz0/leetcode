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
    void moveZeroes(vector<int>& nums) {
       int ln=0;
        f(0,nums.size()){
            if(nums[i]!=0)swap(nums[ln++],nums[i]);
        }
    }
};

// 0 1 0 3 12
// 1 0 0 3 12
// 1 3 0 0 12
// 1 3 12 0 0