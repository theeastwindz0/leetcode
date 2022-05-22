class Solution {
public:
    long long ans=0;
    void helpme(TreeNode *root,int ct,long long temp){
        if(!root)return;
        int curr=temp;
        if(!root->left && !root->right){temp=temp*pow(10,ct)+root->val;ans+=temp;return;}
        helpme(root->left,1,temp*pow(10,ct)+root->val);
        helpme(root->right,1,temp*pow(10,ct)+root->val);
    }
    int sumNumbers(TreeNode* root) {
        helpme(root,0,0);
        return ans;
    }
};