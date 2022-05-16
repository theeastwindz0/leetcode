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
    vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return {};
        // rl(root,0);
        // return ans;
        queue<TN*>q1;
        q1.push(root);
            while(!q1.empty()){
                int len=q1.size();
                f(0,len){
                    TN *curr=q1.front();
                    q1.pop();
                    if(i==len-1)ans.pb(curr->val);
                    if(curr->left)q1.push(curr->left);
                    if(curr->right)q1.push(curr->right);
                }
            }
        return ans;
    }
    
    // void rl(TreeNode *root,int lev){
    //     if(root==NULL)return;
    //     if(ans.size()==lev)ans.push_back(root->val);
    //         rl(root->right,lev+1);
    //         rl(root->left,lev+1);
    // }
    
};