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
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        // f(0,heights.size()){
        //     if(i==heights.size()-1)return i;
        //     if(heights[i+1]<=heights[i])continue;
        //     if(heights[i+1]>heights[i] && bricks-(heights[i+1]-heights[i])>=0){
        //         bricks-=(heights[i+1]-heights[i]);
        //     }
        //     else if(heights[i+1]>heights[i] && ladders>0)ladders--;
        //     else return i;
        // }
        // return 0;
        p<int>pq1;
        f(0,heights.size()-1){
            int diff=heights[i+1]-heights[i];
            if(diff>0)pq1.push(-diff);
            if(pq1.size()>ladders)bricks+=pq1.top(),pq1.pop();
            if(bricks<0)return i;
        }
        return heights.size()-1;
    }
};