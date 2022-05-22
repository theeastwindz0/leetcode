class Solution {
public:
    vector<string>v1;
    void helpme(TreeNode *root,string temp){
        if(!root)return;
        if(!root->left && !root->right){temp+=to_string(root->val);v1.push_back(temp);return;}
        helpme(root->left,temp+to_string(root->val));
        helpme(root->right,temp+to_string(root->val));
    }
    int sumNumbers(TreeNode* root) {
        long long ans=0;
        helpme(root,"");
        for(auto it:v1){long long temp=stoi(it);ans+=temp;}
        return ans;
    }
};