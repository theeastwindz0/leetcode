#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define endl "\n"
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int tSum=0,ans=0;
        f(0,nums.size())tSum+=nums[i];
        tSum-=x;
        if(!tSum)return nums.size();
        int cSum=0,j=0;
        f(0,nums.size()){
            cSum+=nums[i];
            while(j<nums.size() && tSum<cSum)cSum-=nums[j++];
            if(tSum==cSum)ans=max(ans,i-j+1);
        }
        if(!ans)return -1;
        else return nums.size()-ans;
    }
};