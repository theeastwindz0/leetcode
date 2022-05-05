#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
class Solution {
public:
    string frequencySort(string s) {
        um<char,int> um1;
        p<pair<int,char>>p1;
        string ans="";
        f(0,size(s))um1[s[i]]++;
        
        fit(um1)p1.push({it.second,it.first});
        // while(!p1.empty()){cout<<p1.top().first<<endl;p1.pop();}
        
        while(!p1.empty()){
            f(0,p1.top().first)ans+=p1.top().second;
            p1.pop();
        }
        return ans;
    }
};