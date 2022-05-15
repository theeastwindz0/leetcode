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
    int deepestLevel(TN* root){
        if(!root)return 0;
        int rl=deepestLevel(root->left);
        int rr=deepestLevel(root->right);
        
        return max(rl,rr)+1;
    }
    int sum=0;
    int sumFinder(TN *root,int level,int height){
        if(!root)return level;
        // cout<<root->val<<" "<<level<<endl;
        if(level==height)sum+=root->val;
        sumFinder(root->left,level+1,height);
        sumFinder(root->right,level+1,height);
        
        return sum;
    }
    int deepestLeavesSum(TreeNode* root) {
        int ans=deepestLevel(root);
        // cout<<ans<<endl;
        ans=sumFinder(root,0,ans-1);
        return ans;
    }
};