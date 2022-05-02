#define f(i,a) for(int i=0;i<a;i++)
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       vector<int> v1;
        f(i,nums.size()){
            if(nums[i]%2==0){v1.push_back(nums[i]);nums[i]=-1;}
        }
        f(i,nums.size())if(nums[i]!=-1)v1.push_back(nums[i]);
        return v1;
    }
};