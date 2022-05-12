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
    void helpme(TN *root,int dep,int &mDep,int &ans){
        if(!root)return ;
        helpme(root->left,dep+1,mDep,ans);
        helpme(root->right,dep+1,mDep,ans);
        if(dep>mDep){ans=root->val;mDep=dep;}
        
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans=root->val;
        int mDep=0;
        helpme(root,0,mDep,ans);
        return ans;
    }
};