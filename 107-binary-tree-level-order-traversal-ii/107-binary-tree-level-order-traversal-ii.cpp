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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)return {};
        queue<TN*>q1;
        v<v<int>>ans;
        q1.push(root);
        while(!q1.empty()){
            int len=q1.size();
            v<int>temp;
            f(0,len){
                TN *curr=q1.front();
                q1.pop();
                temp.pb(curr->val);
                if(curr->left)q1.push(curr->left);
                if(curr->right)q1.push(curr->right);
            }
            ans.pb(temp);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};