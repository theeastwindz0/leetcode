class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> v1;
        for(int i=0;i<nums.size();i++){
            int num=nums[i]*nums[i];
            v1.push_back(num);
        }
        sort(v1.begin(),v1.end());
        return v1;
    }
};