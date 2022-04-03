class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=0,j=0;
        for(i=nums.size()-2;i>=0;i--)if(nums[i+1]>nums[i])break;
        if(i<0)reverse(nums.begin(),nums.end());
        else{
            for(j=nums.size()-1;j>i;j--)if(nums[j]>nums[i])break;
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
        
    }
};