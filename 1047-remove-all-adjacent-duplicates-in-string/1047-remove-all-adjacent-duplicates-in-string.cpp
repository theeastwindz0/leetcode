#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
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
    string removeDuplicates(string s) {
        
//Testcases passed 104/106 Memory limit Exceeded

//             f(1,size(s)){
//             if(s[i-1]==s[i]){
//                 if(i==1)s=s.substr(2,size(s));
//                 else s=s.substr(0,i-1)+s.substr(i+1,size(s));
                
//                 if(i==1)i=0;
//                 else i=i-2;
//             }
//         }
//         cout<<s;
//         return s;
        string ans="";
        fit(s){
            if(ans.empty() || it!=ans.back())ans.push_back(it);
            else ans.pop_back();
        }
        return ans;
        
    }
};
