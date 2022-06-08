#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define pb push_back
#define ppb pop_back
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define TN TreeNode
#define LN ListNode
#define endl "\n"
class Solution {
public:
    v<string>v1;
    void sf(TreeNode *root,string temp){
        if(!root)return;
        char cu=(97+root->val);
        if(!root->left && !root->right){
        temp=cu+temp;v1.pb(temp);return;}
        sf(root->left,cu+temp);
        sf(root->right,cu+temp);
        
    }
    string smallestFromLeaf(TreeNode* root) {
        sf(root,"");
        sort(v1.begin(),v1.end());
        return v1[0];
    }
};