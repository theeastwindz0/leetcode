class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
//         // for(int i=1;i<nums.size()-1;i++)if(nums[i]>nums[i-1]&& nums[i]<nums[i+1])return true;
//         vector<pair<int,int>>v1;
//         for(int i=0;i<nums.size();i++)v1.push_back(make_pair(nums[i],i));
//         sort(v1.begin(),v1.end());
//         // for(auto it:v1)cout<<it.first<<" "<<it.second<<endl;
        
//         for(int i=1;i<nums.size()-1;i++){
//             if(v1[i].second > v1[i-1].second && v1[i].second < v1[i+1].second)return true;
//         }
        int l=INT_MAX,r=INT_MAX;
        for(auto it:nums){
               if (it < l)
                l = it;
            else if (l < it && it < r)
                r = it;
            else if (r < it)
                return true;
            
            // if (it <= l)
            //      l = it;
            // else if (it <= r)
            //     r = it;
            // else
            //     return true;
        }
        return false;
    }
};