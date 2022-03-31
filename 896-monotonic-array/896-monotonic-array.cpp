class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int ct=0,ct2=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])ct=1;
            if(nums[i]>nums[i+1])ct2=1;
            if(ct && ct2)return 0;
        }
        return 1;
    }
};