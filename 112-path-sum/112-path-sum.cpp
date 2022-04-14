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
    // int last=0,sum=0;
    // bool ans=false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        
//         if(!root|| sum>targetSum){sum-=last; return ans;};
//         last=root->val;
//         sum+=root->val;
//         cout<<sum<<endl;
//         if(sum==targetSum && !root &&!)ans=true;
//         hasPathSum(root->left,targetSum);
//         hasPathSum(root->right,targetSum);

//         return ans;
        
        if(!root)return false;
        if(!root->left && !root->right && targetSum-root->val==0)return true;
        
        bool left=hasPathSum(root->left,targetSum-root->val);
        bool right=hasPathSum(root->right,targetSum-root->val);
        
        return left || right;
    }
};