#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define fit2(it,nums) for(auto &it:nums)
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
    v<v<int>>combi;
    void helpme(int cI, v<int> &nums,v<int>temp)
    {
        if(temp.size()!=0){combi.pb(temp);}
        if(cI>=nums.size())return;
        f(cI,nums.size()){
            temp.pb(nums[i]);
            helpme(i+1,nums,temp);
            temp.ppb();
        }
    }
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        helpme(0,nums,{});
        
        fit(combi){
            int temp=0;
            fit2(it2,it)temp^=it2;
        ans=ans+temp;
        }
        return ans;
    }
};