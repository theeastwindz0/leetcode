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
    vector<int>v1;
    vector<int> preorder(Node* root) {
        if(!root)return v1;
        v1.push_back(root->val);
        for(auto it:root->children)preorder(it);
        return v1;
    }
};