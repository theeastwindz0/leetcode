	#define ll long long
	#define f(a,b) for(int i=a;i<b;i++)
	#define f2(x,a,b) for(int x=a;x<b;x<<=1)
	#define fr(b,a) for(int i=b;i>=a;i--)
	#define fit(nums) for(auto &it:nums)
	#define v vector
	#define p priority_queue
	#define um unordered_map
	#define pb push_back
	#define ppb pop_back
	#define TN TreeNode
	#define LN ListNode
class Solution {
public:
    int largestCombination(vector<int>& can) {
        int ans=0;
       f2(j,1,10000001){
           int temp=0;
            f(0,can.size()){
            if(can[i]& j)temp++;
            }
           ans=max(temp,ans);
       }
    return ans;
    }
};
