class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans=0,ct=0;
        sort(costs.begin(),costs.end());
        while( ct<costs.size() && costs[ct]<=coins)ans++,coins-=costs[ct++];
        return ans;
    }
};