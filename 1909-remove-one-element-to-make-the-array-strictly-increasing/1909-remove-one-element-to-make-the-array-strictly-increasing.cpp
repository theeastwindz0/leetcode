class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int ct=0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                if (ct == 1) 
                    return false;
                ct++;
                if (i > 1 && nums[i] <= nums[i - 2] )
                    nums[i] = nums[i - 1];
                cout<<nums[i-1];
            }
        }
        return 1;
    }
};