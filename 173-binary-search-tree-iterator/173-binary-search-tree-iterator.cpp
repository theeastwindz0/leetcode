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
class BSTIterator {
public:
    vector<int>v1;
    int ct=0;
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    void inorder(TreeNode *root){
       if(!root)return;
        inorder(root->left);
        v1.push_back(root->val);
        inorder(root->right); 
    }
    
    int next() {
        int temp=v1[ct];
        ct++;
        return temp;
    }
    
    bool hasNext() {
        if(ct>=v1.size())return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

//3 7 9 15 20