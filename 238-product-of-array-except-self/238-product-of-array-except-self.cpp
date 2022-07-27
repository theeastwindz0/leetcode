class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,ct=0;
        for(auto it:nums)if(it!=0)prod*=it;else ct++;
        if(ct>=2)prod=0;
        for(int i=0;i<nums.size();i++){
            int ans=0;
            if(ct && nums[i]!=0)nums[i]=0;
            else if(nums[i]==0)nums[i]=prod;
            else nums[i]=prod/nums[i];
        }
        return nums;
    }
};