class Solution {
public:
    bool ans=0;
    bool hasPathSum(TreeNode* root, int ts) {
        if(!root || ans)return ans;
        if(!root->left && !root->right && ts-root->val==0){ans=1;return ans;}
        hasPathSum(root->left,ts-root->val);
        hasPathSum(root->right,ts-root->val);
        return ans;
    }
};