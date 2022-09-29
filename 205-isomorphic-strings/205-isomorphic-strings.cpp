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
    bool helper(string s,string t){
        um<char,char>um1;
        int ans=0;
        f(0,size(s)){
            if(um1.find(s[i])==um1.end())um1[s[i]]=t[i];
            else{if(um1[s[i]]!=t[i])return 0;}
        }
        return 1;
    }
    bool isIsomorphic(string s, string t) {
        return helper(s,t) && helper(t,s);
    }
};


