class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int low=0,mid=0,high=nums.size()-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target) return true;
            else if(target>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};