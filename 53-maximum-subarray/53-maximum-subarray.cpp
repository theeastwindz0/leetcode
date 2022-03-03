class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int currentSum=0,maxSum=-10000,i=0;
        
        for(;i<nums.size();i++)
        {
            currentSum=max(currentSum+nums[i],nums[i]);
            maxSum=max(maxSum,currentSum);
        }
        
        return maxSum;
    }
};