class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       vector<int> v1;
        for(int i=0;i<nums.size();i++)
        {
            int k=0;
            vector<int> v2=v1;
            v1.clear();
            for(int j=0;j<v2.size()+1;j++){
                if(index[i]==j)v1.push_back(nums[i]);
                else v1.push_back(v2[k++]);
            }
        }
        return v1;
    }
};