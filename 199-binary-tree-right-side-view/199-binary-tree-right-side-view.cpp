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
    vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {
        rl(root,0);
        return ans;
    }
    
    void rl(TreeNode *root,int lev){
        if(root==NULL)return;
        if(ans.size()==lev)ans.push_back(root->val);
            rl(root->right,lev+1);
            rl(root->left,lev+1);
    }
    
};