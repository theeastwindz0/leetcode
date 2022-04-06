class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int> m1;
        long long ans=0;
        for(int i=0;i<arr.size();i++){
            ans+=m1[target-arr[i]];
            ans%=1000000007;
            for(int j=0;j<i;j++)m1[arr[i]+arr[j]]++;
        }
        return ans;
    }
};