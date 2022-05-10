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
    v<string> ans;
    
    void helper(int cI,string digits,string temp){
        vector<string> v1={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.size()==temp.size()){ans.pb(temp);return;}
        fit(v1[digits[cI]-'2'])helper(cI+1,digits,temp+it);
    }
    vector<string> letterCombinations(string digits) {
        if(!size(digits))return {};
        helper(0,digits,"");
        return ans;
    }
};
