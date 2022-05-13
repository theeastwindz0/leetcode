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
    // v<int>v1;
    int ans=INT_MAX;
    TN *prev=NULL;
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        // int ans;
        // f(1,v1.size())ans=min(ans,v1[i]-v1[i-1]);
        return ans;
    }
    void inorder(TN *root){
        if(!root)return;
        inorder(root->left);
        // v1.pb(root->val);
        if(prev)ans=min(ans,root->val-prev->val);
        prev=root;
        inorder(root->right);
    }
};