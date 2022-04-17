/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *newRoot=new TreeNode();
        TreeNode *temp=newRoot;
        inorder(root,newRoot);
        return temp->right;
    }
    void inorder(TreeNode *root,TreeNode *&newRoot){
        if(!root)return;
        inorder(root->left,newRoot);
        newRoot->right=new TreeNode(root->val);
        newRoot=newRoot->right;
        inorder(root->right,newRoot);
        
    }
};