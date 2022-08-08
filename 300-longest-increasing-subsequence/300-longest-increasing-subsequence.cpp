class Solution {
public:
    vector<vector<int>>dp;
    int lengthOfLIS(vector<int>& nums) {
        dp.resize(size(nums),vector<int>(1+size(nums),-1));
       return helper(nums,0,-1); 
    }
    
    int helper(vector<int>&nums,int i,int prev){
        if(i>=size(nums))return 0;
         if(dp[i][prev+1] != -1) return dp[i][prev+1];
        int take=0,dt=helper(nums,i+1,prev);
        if(prev==-1 || nums[i]>nums[prev])take=1+helper(nums,i+1,i);
        return dp[i][prev+1]=max(take,dt);   
    }
};

