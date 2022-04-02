class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        vector<int> nums2;
        
        for(int i=0;i<nums.size();i++)
        {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]+nums[i]==target)
            {
                nums2.push_back(i);
                nums2.push_back(j);
                break;
            }     
        }
    }
        return nums2;
    }
};