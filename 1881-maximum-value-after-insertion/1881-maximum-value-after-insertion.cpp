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
    string maxValue(string n, int x) {
        string ans="";
        bool neg=false;
        if(n[0]=='-')neg=true;
        f(neg?1:0,size(n)){
            if(!neg)if(x>(n[i]-'0'))ans=n.substr(0,i)+to_string(x)+n.substr(i,size(n));
            if(neg){if(x<(n[i]-'0'))ans=n.substr(0,i)+to_string(x)+n.substr(i,size(n));}
            if(size(ans))return ans;
        }
        ans=n+to_string(x);
        return ans;
    }
};