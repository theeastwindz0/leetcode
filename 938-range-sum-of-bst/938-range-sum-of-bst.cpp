class Solution {
public:
    int ans=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)return 0;
        if(root->val<=high && root->val>=low)ans+=root->val;
        rangeSumBST(root->left,low,high);
        rangeSumBST(root->right,low,high);
        return ans;
    }
};