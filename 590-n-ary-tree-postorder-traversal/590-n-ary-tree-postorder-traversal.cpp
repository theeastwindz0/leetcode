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
    v<int>ans;
    void pso(Node* root){
        if(!root)return;
        fit(root->children)pso(it);
        ans.pb(root->val);
    }
    vector<int> postorder(Node* root) {
        pso(root);
        return ans;
    }
};