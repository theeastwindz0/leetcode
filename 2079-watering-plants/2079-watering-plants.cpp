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
    int wateringPlants(vector<int>& plants, int capacity) {
        int refill=capacity;
        int ans=0;
        f(0,plants.size()){
            ans++;
            refill-=plants[i];
            int nx=(i==plants.size()-1)?0:plants[i+1];
            if(refill<nx)ans+=2*(i+1),refill=capacity;
        }
        return ans;
    }
};