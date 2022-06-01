class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            v1.push_back(sum);
        }
        
        return v1;
    }
};