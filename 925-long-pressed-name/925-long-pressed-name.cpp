#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name[0]!=typed[0])return 0;
        int i=0,j=0;
        while(i<size(name) || j<size(typed)){
            if(name[i]==typed[j])i++;
            else if(name[i-1]!=typed[j])return 0;
            j++;
        }
        return 1;              
    }
};