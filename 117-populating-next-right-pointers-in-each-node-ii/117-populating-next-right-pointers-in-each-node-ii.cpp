/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        queue<Node*>q1;
        q1.push(root);
        
        while(!q1.empty()){
            int len=q1.size();
            for(int i=0;i<len;i++){
                Node *curr=q1.front();
                q1.pop();
                if(i!=len-1)curr->next=q1.front();
                else curr->next=NULL;
                if(curr->left)q1.push(curr->left);
                if(curr->right)q1.push(curr->right);
            }
        }
        return root;
    }
};