class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int temp=nums[i] +nums[l]+nums[r];
                if(abs(target-temp)<abs(ans-target))ans=temp;
                if(temp<target)l++;
                else r--;
            }
            // if(nums[i]>0)break;
        }
        return ans;
    }
};