class Solution {
public:
    TreeNode *prev=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        flatten(root->right);
        flatten(root->left);
        cout<<root->val<<" ";
        root->right=prev;
        root->left=NULL;
        prev=root;      
    }
};