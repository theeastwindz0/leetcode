class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxLen=1,max=0,currentNumber=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                maxLen++;
            else 
                maxLen=1;
            
            if(maxLen>max)
            {
                max=maxLen;
                currentNumber=nums[i];
            }
        }
        
        if(nums.size()==1)
            return nums[0];
        else
            return currentNumber;
    }
};