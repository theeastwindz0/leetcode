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
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> s1;
        s1.push({'$',1});
        f(0,size(s)){
            s1.push({s[i],s1.top().first==s[i]?s1.top().second+1:1});
            if(s1.top().second==k){
            while(s1.top().first==s[i])s1.pop();
            s.erase(i-k+1,k);
            i-=k;
            }
        }
                
        return s;
    }
};
