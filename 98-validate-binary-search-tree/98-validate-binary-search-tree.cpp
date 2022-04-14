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
    bool isValidBST(TreeNode* root) {
        return isBSTCo(root,-9223372036854775807,9223372036854775807);
    }
    bool isBSTCo(TreeNode *root,long long int minVal,long long int maxVal){
        if(root==NULL)return true;
        
        if(root->val>minVal && root->val<maxVal && isBSTCo(root->left,minVal,root->val)&& isBSTCo(root->right,root->val,maxVal))return true;
        else return false;
    }
};