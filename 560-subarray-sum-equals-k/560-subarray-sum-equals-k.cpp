class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //TLE
        // vector<int>v1;
        // v1.push_back(0);
        // for(auto it:nums)v1.push_back(v1.back()+it);
        // int ct=0;
        // for(int i=0;i<v1.size();i++){
        //     for(int j=i+1;j<v1.size();j++){
        //         if(v1[j]-v1[i]==k)ct++;
        //     }
        // }
        // return ct;
        
        unordered_map<int,int> m1={{0,1}};
        int ct=0,sum=0;
        for(int it:nums){
            sum+=it;
            ct+=m1[sum-k];
            m1[sum]++;
        }
        
        return ct;
        
    }
};
