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
    v<string> ans;
    void helpme(string temp,int i,string s)
    {
        if(size(temp)==size(s)){ans.pb(temp);return;}
        if(isdigit(s[i])){
            temp.pb(s[i]);
            helpme(temp,(-(~i)),s);
        }
        else{
            string up=temp;
            up.pb(toupper(s[i]));
            helpme(up,(-(~i)),s);
            
            string low=temp;
            low.pb(tolower(s[i]));
            helpme(low,(-(~i)),s);
        }
    }
    vector<string> letterCasePermutation(string s) {
        helpme("",0,s);
        return ans;
    }
};