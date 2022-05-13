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
    TN *ans=NULL;
      TN* findN(TN * root,int target){
        if(!root || ans)return ans;
        findN(root->left,target);
        if(root->val==target){ans=root;return ans;}
        findN(root->right,target);
        return ans;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return findN(cloned,target->val);
        // return ans;
    }
};