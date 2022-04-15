class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v1;
        if(nums.size()<3)return v1;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int num1=i,num2=i+1,num3=nums.size()-1;
            if(nums[i]>0)break;
            if(i>0 && nums[i]==nums[i-1])continue;
            
            while(num2<num3){
                int sum=nums[num1]+nums[num2]+nums[num3];
                if(sum>0)num3--;
                else if(sum<0)num2++;
                else{
                    v1.push_back({nums[num1],nums[num2],nums[num3]});
                    int num2Rep=nums[num2],num3Rep=nums[num3];
                    
                    while(num2<num3 && nums[num2]==num2Rep)num2++;
                    while(num2<num3 && nums[num3]==num3Rep)num3--;
                }
            }
        }
        return v1;
    }
};