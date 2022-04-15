class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m1;
        for(int i=0;i<nums.size();i++)m1[nums[i]]++;
        int ans=0;
        for(auto it:m1)if(it.second==1){ans=it.first;break;}
        return ans;
    }
};