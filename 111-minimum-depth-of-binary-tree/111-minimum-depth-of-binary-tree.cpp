class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        int rl=minDepth(root->left);
        int rr=minDepth(root->right);
        return (!rl || !rr)?(rl+rr)+1:min(rl,rr)+1;
    }
};