
class Solution {
public:
    int helpme(Node *root){
        if(!root)return 0;
        int ans=1;
        for(int i=0;i<root->children.size();i++){
        ans=max(ans,helpme(root->children[i])+1);
        }
        return ans;
    }
    int maxDepth(Node* root) {
        if(!root)return 0;
        return helpme(root);
    }
};