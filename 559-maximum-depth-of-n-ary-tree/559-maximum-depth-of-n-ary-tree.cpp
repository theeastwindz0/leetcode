/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int ans=0;
    void helpme(Node *root,int ct){
        if(!root)return;
        ans=max(ans,ct);
        for(int i=0;i<root->children.size();i++){
        helpme(root->children[i],ct+1);
        }
    }
    int maxDepth(Node* root) {
        if(!root)return 0;
        helpme(root,0);
        return ans+1;                                         
    }
};