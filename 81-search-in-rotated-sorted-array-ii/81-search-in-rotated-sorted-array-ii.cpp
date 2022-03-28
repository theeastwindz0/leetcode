class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i=0;
        vector<int> v1;
        if(nums.size()!=1)
        {
        for(i=0;i<nums.size()-1;i++){ if(nums[i+1]<nums[i]){ break;}}
        for(int k=i+1;k<nums.size();k++) v1.push_back(nums[k]);
        for(int k=0;k<=i;k++) v1.push_back(nums[k]);
        }
        else for(int k=0;k<nums.size();k++) v1.push_back(nums[k]);

        
        
        int low=0,mid=0,high=v1.size()-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(v1[mid]==target) return true;
            else if(target>v1[mid]) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};