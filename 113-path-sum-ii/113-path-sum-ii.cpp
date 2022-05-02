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
    vector<vector<int>> v1;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        shellFunc(root,{},targetSum);
        return v1;
    }
    
    void shellFunc(TreeNode *root,vector<int>v2,int targetSum){
        if(!root)return;
        
        if(!root->left && !root->right && targetSum-root->val==0){
            v2.push_back(root->val);
            v1.push_back(v2);
        }
            v2.push_back(root->val);
        shellFunc(root->left,v2,targetSum-root->val);
        shellFunc(root->right,v2,targetSum-root->val);
    }
};