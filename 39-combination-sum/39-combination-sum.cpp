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
    v<int>temp;
    v<v<int>>ans;
//     void helper(int i,int target,v<int>can){
//         if(target==0){ans.pb(temp);return;}
//         if(target<0 || i==can.size())return;
//         helper(i+1,target,can);
        
//         temp.pb(can[i]);
//         helper(i,target-can[i],can);
//         temp.ppb();
//     }
    
//     vector<vector<int>> combinationSum(vector<int>& can, int target) {
//       helper(0,target,can);
//         return ans;
//     }
    
    void helper(int cInd,int sum,int target,v<int>can){
        if(sum>target)return;
        if(sum==target){ans.pb(temp);return;}
        //If Cind replaced by 0 then it will ans will give all possible combination
        f(cInd,can.size()){
            temp.pb(can[i]);
            sum+=can[i];
            helper(i,sum,target,can);
            temp.ppb();
            sum-=can[i];
        }
    }
    
     vector<vector<int>> combinationSum(vector<int>& can, int target) {
      helper(0,0,target,can);
        return ans;
    }
};