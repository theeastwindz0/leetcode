#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)return {};
        queue<Node*>q1;
        v<v<int>> ans;
        q1.push(root);
        while(!q1.empty()){
            int len=q1.size();
            v<int>v1;
            f(0,len){
                Node *curr=q1.front();
                q1.pop();
                v1.pb(curr->val);
                fit(curr->children)q1.push(it);
            }
            ans.pb(v1);
        }
        return ans;
    }
};
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