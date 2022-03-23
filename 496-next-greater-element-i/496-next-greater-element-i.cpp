class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1;
        for(int i=0;i<nums1.size();i++)
        {
            int ct=0,num=-1;
            for(int j=0;j<nums2.size();j++)
            {
                if(ct)
                    if(nums2[j]>nums1[i])
                    {
                        num=nums2[j];
                        break;
                    }
                if(nums1[i]==nums2[j])ct++;
            }
            v1.push_back(num);
        }
        return v1;
    }
};