class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v1=nums;
        nums.clear();
        int ct=0;
        for(int i=0;i<v1.size();i++){if(nums[i]!=val){ct++;nums.push_back(v1[i]);}}
        return ct;
    }
};