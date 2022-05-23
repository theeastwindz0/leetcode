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
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl, vector<vector<int>>& sl) {
        if(!fl.size() || !sl.size())return {};
        v<v<int>>ans;
        int i=0,j=0;
        while(i<fl.size() && j<sl.size()){
            int l=max(fl[i][0],sl[j][0]);
            int r=min(fl[i][1],sl[j][1]);
            if(l<=r)ans.pb({l,r});
            if(fl[i][1]<sl[j][1])i++;else j++;
        }
        return ans;
    }
};