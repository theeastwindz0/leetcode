#define long long ll
#define f(a,b) for(int i=a;i<b;i++)
#define fr(it,nums) for(auto &it:nums)

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int ct=0;
        f(0,nums.size()-1)if(nums[i+1]<nums[i])ct++;
        if(!ct)return 0;
        
        int start=-1,end=-1;
        vector<int>v1=nums;
        sort(v1.begin(),v1.end());
        f(0,nums.size()){
            if(start==-1 && nums[i]!=v1[i])start=i;
            if(nums[i]!=v1[i])end=i;
        }
        return end-start+1;
    }
};

// [2,6,4,8,10,9,15]
// [1,2,3,4]
// [1]
// [1,3,2,3,3]
// [1,3,2,2,2]
// [5,4,3,2,1]