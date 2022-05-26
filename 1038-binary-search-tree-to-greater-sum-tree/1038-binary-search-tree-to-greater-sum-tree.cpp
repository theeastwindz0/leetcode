class Solution {
public:
    int pS=0;
    TreeNode* bstToGst(TreeNode* root) {
       if(!root)return root;
        bstToGst(root->right);
        root->val+=pS;
        pS=root->val;
        bstToGst(root->left);
        
        return root;
    }
};