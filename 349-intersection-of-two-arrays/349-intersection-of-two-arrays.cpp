class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      set<int>s1,s2;
        for(auto it:nums1)s1.insert(it);
        for(auto it:nums2)s2.insert(it);
        nums1.clear();
        for(auto it:s1)if(s2.find(it)!=s2.end())nums1.push_back(it);
        return nums1;
    }
};

// if(s2.find(val)!=s2.end()) 