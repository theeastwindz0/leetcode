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
    int minDeletions(string s) {
        int ans=0;
        um<char,int>um1;
        f(0,size(s))um1[s[i]]++;
        set<int>s1;
        int ct=1;
        fit(um1){
            while(1){
                if(it.second!=0)s1.insert(it.second);
                if(s1.size()==ct || it.second==0)break;
                it.second--;
                ans++;
            }
            if(it.second)ct++;
        }
        return ans;
    }
};
