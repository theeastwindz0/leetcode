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
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,ans=0;
        v<int>v1(256,-1);
        while(right<size(s)){
            if(v1[s[right]]!=-1)left=max(left,v1[s[right]]+1);
            v1[s[right]]=right;
            ans=max(right-left+1,ans);
            right++;
        }
        return ans;
    }
};