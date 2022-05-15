#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    v<string>ans;
    void helpme(int op,int cl,int n,string temp){
        // cout<<"temp "<<op<<" "<<cl<<endl;
        if(size(temp)==n*2){ans.pb(temp);return;}
        if(op<n)helpme(op+1,cl,n,temp+"(");
        // cout<<"temp2 "<<op<<" "<<cl<<endl;
        if(cl<op)helpme(op,cl+1,n,temp+")");
        // cout<<"temp3 "<<op<<" "<<cl<<endl;
        
    }
    
    vector<string> generateParenthesis(int n) {
        helpme(0,0,n,"");
        return ans;
    }
};