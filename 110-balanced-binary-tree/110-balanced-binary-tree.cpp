class Solution {
public:
    int ans=1;
    bool isBalanced(TreeNode* root) {
        height(root);
        return ans;
    }
    int height(TreeNode *root){
        if(root==NULL || !ans)return 0;
        int leftH=height(root->left);
        int rightH=height(root->right);
        if(abs(rightH-leftH)>1)ans=0;
        
        return max(leftH,rightH)+1;
    }
};