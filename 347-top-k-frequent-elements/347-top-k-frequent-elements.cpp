class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m1;
        for(int it:nums)m1[it]++;
        
        priority_queue<pair<int,int>> p1;
        for(auto it:m1)p1.emplace(it.second,it.first);
        // priority_queue<pair<int,int>> p2=p1;
        // while(!p2.empty()){
        //     cout<<p2.top().first<<" "<<p2.top().second<<endl;
        //     p2.pop();
        // }
        nums.clear();
        while(k--){
            nums.push_back(p1.top().second);
            p1.pop();
        }
        return nums;
    }
};