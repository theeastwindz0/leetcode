#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    v<pair<int,int>>v1;
    v<int>v2;
    int averageOfSubtree(TreeNode* root) {
        preorder(root);
        func(root);
        // fit(v1)cout<<it.first<<" "<<it.second<<endl;
        // fit(v2)cout<<it<<endl;
        int ans=0;
        f(0,v1.size())if(v1[i].second/v2[i]==v1[i].first)ans++;
        return ans;
    }
    
    int preorder(TN *root){
        if(!root)return 0;
        int left=preorder(root->left);
        int right= preorder(root->right);
        int x=left+right+root->val;
        v1.pb({root->val,x});
        return x;
    }
    int func(TN* root){
        if(!root)return 0;
        int left=func(root->left);
        int right=func(root->right);
        int x=left+right+1;
        v2.pb(x);
        return x;
    }
};