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
    vector<string> findRelativeRanks(vector<int>& score) {
        p<int>pq1;
        v<string>ans;
        um<int,int>um1;
        f(0,score.size())pq1.push(score[i]),um1[score[i]]=i,ans.pb(to_string(i+1));
        int ct=1;
        v<string> v1;
        v1.pb("Gold Medal");
        v1.pb("Silver Medal");
        v1.pb("Bronze Medal");
        while(!pq1.empty()){
            cout<<ct<<" ";
            if(ct<=3){
                ans[um1[pq1.top()]]=v1[ct-1];
            }else{
                ans[um1[pq1.top()]]=to_string(ct);
            }
            ct++;
            pq1.pop();
        }
        return ans;
    }
};