class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        if(nums.size()==1)if(nums[0]==target)return 0;else return -1;
        for( i=0;i<nums.size()-1;i++){
            if(nums[i]==target)return i;
            if(nums[i+1]<nums[i]){break;}
        }
        int low=0,mid=0,high=nums.size()-1;
        if(i!=nums.size()-1)low=i+1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)return mid;
            else if(target<nums[mid])high=mid-1;
            else low=mid+1;
        }
            
        return -1;
    }
};