#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> m1;
        f(0,nums.size())m1[nums[i]]++;
        int ans=0;
        fit(m1)cout<<it.first<<" "<<it.second<<endl;
        
        f(0,nums.size()){
            int target=k-nums[i];
            if(target==nums[i] && m1[target]<2)continue;
            if(m1.find(target)!=m1.end()){
                if(m1[target]>=1 && m1[nums[i]]>=1){
                m1[target]--;
                m1[nums[i]]--;
                ans++;
                }
                
            }
        }
        return ans;
    }
};