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
    vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>>v1;
//         if(!root)return v1;
//         queue<TreeNode*>q1;
//         q1.push(root);
//         vector<int>v3;
//         v3.push_back(root->val);
//         v1.push_back(v3);
//         while(!q1.empty())
//         {
//             vector<int>v2;
//             TreeNode *current=q1.front();
//             if(current->left){v2.push_back(current->left->val);q1.push(current->left);}
//             if(current->right){v2.push_back(current->right->val);q1.push(current->right);}
            
//             v1.push_back(v2);
//             q1.pop();
//         }
//         return v1;
        vector<vector<int>> ans;
        if (!root) return ans;
        deque<TreeNode*> queue;
        queue.push_back(root);
        while (!queue.empty()) {
            int qlen = queue.size();
            vector<int> row;
            for (int i = 0; i < qlen; i++) {
                TreeNode* curr = queue.front();
                queue.pop_front();
                row.push_back(curr->val);
                if (curr->left) queue.push_back(curr->left);
                if (curr->right) queue.push_back(curr->right);
            }
            ans.push_back(row);
        }
        return ans;
    }
};