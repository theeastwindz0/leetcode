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
    bool find132pattern(vector<int>& nums) {
        stack<int> s1;
        int curr=INT_MIN;
        fr(nums.size()-1,0){
            if(curr>nums[i])return 1;
            while(!s1.empty() && nums[i]>s1.top()){
                // cout<<"test"<<endl;
                curr=s1.top();
                s1.pop();
            }
            s1.push(nums[i]);
        }
        return false;
    }
};