//Next time do this question with bit manipulation.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>um1;
        for(int i=0;i<nums.size();i++)um1[nums[i]]++;
        for(auto it:um1)if(it.second==1)return it.first;
        return -1;
    }
};