
class Solution {
public:
    vector<string>ans;
    void helpme(TreeNode *root,string temp){
        if(!root){return;}
        else if(root->left || root->right)temp+=to_string(root->val)+"->";
        else{temp+=to_string(root->val);
            ans.push_back(temp);}
        helpme(root->left,temp);
        helpme(root->right,temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        helpme(root,"");
        return ans;
    }
};