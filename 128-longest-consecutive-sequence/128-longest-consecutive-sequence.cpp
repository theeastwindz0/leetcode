class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!size(nums))return 0;
     sort(nums.begin(),nums.end());
        int ans=1,cl=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1)cl++;
            else if(nums[i]-nums[i-1]!=0) cl=1;
            ans=max(cl,ans);
        }
        return ans;
    }
};