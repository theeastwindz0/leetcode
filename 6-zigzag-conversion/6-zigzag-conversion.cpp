#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
     v<string> v1(numRows);
        int ct=0;
        bool rev=false;
        f(0,size(s)){
            v1[ct].pb(s[i]);
            if(rev)ct--;else ct++;
            if(ct==numRows){rev=true;ct=numRows-2;}
            if(ct==-1){rev=false;ct=1;}
        }
        string ans="";
        fit(v1)ans+=it;
        return ans;
    }
};

