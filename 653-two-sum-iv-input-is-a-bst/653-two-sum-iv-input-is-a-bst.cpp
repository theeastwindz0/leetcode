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
    vector<int>v1;
    bool findTarget(TreeNode* root, int k) {
        bool ans=false;
        InOrder(root);
        int l=0,r=v1.size()-1;
        while(l<r){
            if(v1[l]+v1[r]==k){ans=true;break;}
            else if(v1[l]+v1[r]<k)l++;
            else r--;
        }
        return ans;
    }
    void InOrder(TreeNode *root){
        if(!root)return ;
        InOrder(root->left);
        v1.push_back(root->val);
        InOrder(root->right);
    }
};