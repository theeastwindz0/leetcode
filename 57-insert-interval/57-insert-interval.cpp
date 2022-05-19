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
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        v<v<int>>ans;
        f(0,intervals.size()){
            if(intervals[i][1]<newInterval[0])ans.pb(intervals[i]);
            else if(intervals[i][0]>newInterval[1]){ans.pb(newInterval);newInterval=intervals[i];}
            else if(intervals[i][0]>=newInterval[0] || intervals[i][0]<=newInterval[1]){
                newInterval[0]=min(intervals[i][0],newInterval[0]);
                newInterval[1]=max(intervals[i][1],newInterval[1]);
            }
        }
        ans.pb(newInterval);
        return ans;
    }
};