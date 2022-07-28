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
    int characterReplacement(string s, int k) {
        v<int>v1(26,0);
        int l=0,maxA=0,ans=0;
        f(0,size(s)){
            v1[s[i]-'A']++;
            maxA=max(maxA,v1[s[i]-'A']);
            if(i-l+1-maxA>k){
                v1[s[l]-'A']--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};