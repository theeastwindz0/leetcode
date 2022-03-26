class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0,l=nums.size()-1,m,ct=0;
        while(f<=l)
        {
            m=(f+l)/2;
            if(nums[m]==target) return m;
            else if(target<nums[m]) l=m-1;
            else f=m+1;
        }
         return -1;
    }
};