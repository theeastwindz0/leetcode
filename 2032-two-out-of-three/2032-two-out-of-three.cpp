class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        unordered_map<int,int>um1,um2,um3;
        for(int i=0;i<nums1.size();i++)um1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)um2[nums2[i]]++,nums1.push_back(nums2[i]);
        for(int i=0;i<nums3.size();i++)um3[nums3[i]]++,nums1.push_back(nums3[i]);
        sort(nums1.begin(),nums1.end());
        ans.push_back(nums1[0]);
        for(int i=1;i<nums1.size();i++)if(nums1[i]!=nums1[i-1])ans.push_back(nums1[i]);
        nums1=ans;
        ans.clear();
        for(auto it:nums1)if((um1[it] && um2[it]) || (um2[it] && um3[it]) || (um3[it] && um1[it]))ans.push_back(it);
        return ans;
    }
};