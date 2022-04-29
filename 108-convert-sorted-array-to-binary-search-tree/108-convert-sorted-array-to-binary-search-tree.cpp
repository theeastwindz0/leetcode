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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)return NULL;
        return arrayToTree(nums,0,nums.size()-1);
    }
    TreeNode * arrayToTree(vector<int> nums,int l,int r){
        if(l>r)return NULL;
        int m=l+(r-l)/2;
        
        TreeNode *node=new TreeNode(nums[m]);
        node->left=arrayToTree(nums,l,m-1);
        node->right=arrayToTree(nums,m+1,r);
        
        return node;
    }
};