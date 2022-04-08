class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            int diff=0,ct=0;
            vector<int>v2;
            for(int j=l[i];j<=r[i];j++)v2.push_back(nums[j]);
            sort(v2.begin(),v2.end());
            for(int j=0;j<=r[i]-l[i]-1;j++){
                if(!ct)diff=v2[j+1]-v2[j];
                if(v2[j+1]-v2[j]!=diff){ans.push_back(false);ct=0;break;}
                ct++;
            }
            if(ct)ans.push_back(true);
        }
        return ans;
    }
};