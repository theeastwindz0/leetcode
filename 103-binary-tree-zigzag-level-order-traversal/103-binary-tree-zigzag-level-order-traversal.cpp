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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
        vector<vector<int>> v1;
        deque<TreeNode*> d1;
        d1.push_back(root);
        bool lr=true;
        
        while(!d1.empty()){
            int dSize=d1.size();
            vector<int>v2(dSize);
            for(int i=0;i<dSize;i++){
                TreeNode *curr=d1.front();
                d1.pop_front();
                int pos=(lr)?i:dSize-i-1;
                v2[pos]=curr->val;
                if(curr->left)d1.push_back(curr->left);
                if(curr->right)d1.push_back(curr->right);
            }
            v1.push_back(v2);
            lr=!lr;
        }
        return v1; 
    }
};