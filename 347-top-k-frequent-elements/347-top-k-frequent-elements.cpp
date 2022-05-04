#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m1;
        for(int it:nums)m1[it]++;
        
        // fit(m1)cout<<it.first<<" "<<it.second<<endl;
        p<pair<int,int>> p1;
        for(auto it:m1)p1.emplace(it.second,it.first);
        
        // p<pair<int,int>> p2=p1;
        
        // while(!p2.empty()){cout<<p2.top().first<<" "<<p2.top().second<<endl;p2.pop();}
        
        
        nums.clear();
        
        while(k--){
            nums.push_back(p1.top().second);
            p1.pop();
        }
        return nums;
    }
};