class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ct=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                ct++;
            nums[ct]=nums[i];
        }
        }
        return ct+1;
    }
};