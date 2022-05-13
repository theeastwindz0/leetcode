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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 && root2){
            TN *root=new TN(root1->val+root2->val);
            root->left=mergeTrees(root1->left,root2->left);
            root->right=mergeTrees(root1->right,root2->right);
            return root;
        }else return root2?root2:root1;
    }
};