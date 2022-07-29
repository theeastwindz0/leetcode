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
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
//         um<char,int>um1;
        v<string>ans;
//         f(0,size(pattern))um1[pattern[i]]++;
        
//         f(0,size(words)){
//             um<char,int>um2;
//             f2(j,0,words[i].size())um2[words[i][j]]++;
//         if(um1.size()==um2.size()){
//             um<char,int>::iterator it2=um1.begin();
//             int ct=0;
//             fit(um2){
//                 if(it.second!=it2->second)break;
//                 ct++;
//                 it2++;
//             }
//             cout<<ct<<endl;
//             if(ct==um1.size())ans.pb(words[i]);
//         }
//         }
        fit(words)if(normalise(it)==normalise(pattern))ans.pb(it);;
        return ans;
        
    }
    string normalise(string s){
        um<char,int>um1;
        f(0,size(s))if(!um1.count(s[i]))um1[s[i]]=um1.size();
        f(0,size(s))s[i]=um1[s[i]]+'a';
        return s;
    }
    
};





















