#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define pb push_back
#define ppb pop_back
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define TN TreeNode
#define LN ListNode
#define endl "\n"
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        um<char,int>um1,um2;
        int ans=INT_MAX;
        f(0,size(target))um2[target[i]]++;
        f(0,size(s))if(um2.find(s[i])!=um2.end())um1[s[i]]++;
        if(um1.size()!=um2.size())return 0;
        um<char,int>::iterator it2=um2.begin();
        um<char,int>::iterator it1=um1.begin();
        // fit(um1)cout<<it.first<<" "<<it.second<<endl;
        // fit(um2)cout<<it.first<<" "<<it.second<<endl;
        
        f(0,um1.size()){
            ans=min(ans,um1[target[i]]/um2[target[i]]);
        }
        
        return ans;
    }
};