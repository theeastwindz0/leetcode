
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root){
            if(key<root->val)root->left=deleteNode(root->left,key);
            else if(key>root->val)root->right=deleteNode(root->right,key);
            else{
                if(!root->left && !root->right)return NULL;
                
                if(!root->left || !root->right)
                    return root->right?root->right:root->left;
                
                //For Future reference Finding greatest value in left sub tree
                
                // TreeNode *temp=root->left;
                // while(temp->right)temp=temp->right;
                // root->val=temp->val;
                // root->left=deleteNode(root->left,temp->val);
                
                //or finding smallest value in right subtree will also be accepted
                TreeNode *temp=root->right;
                while(temp->left)temp=temp->left;
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
            }
        }
        return root;
        
    }
};