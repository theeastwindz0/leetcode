class Solution {
public:
    long long ans=0;
    // void helpme(TreeNode *root,int ts,int csum,unordered_map<int,int>um1){
    //     if(!root)return;
    //     // cout<<csum<<endl;
    //     csum=csum+root->val;
    //     if(um1.count(csum-ts)==1){ans++;}
    //     um1[csum]=1;
    //     // cout<<endl;
    //     // for(auto it:um1)cout<<it.first<<" "<<it.second<<endl;
    //     helpme(root->left,ts,csum,um1);
    //     helpme(root->right,ts,csum,um1);
    //     um1[csum]=0;
    // }
    int pathSum(TreeNode* root, int ts) {
    //     unordered_map<int,int>um1={{0,1}};
    //     helpme(root,ts,0,um1);
    //     return ans;
        if(!root)return ans;
        helpme(root,ts);
        pathSum(root->left,ts);
        pathSum(root->right,ts);
        
        return ans;
    }
    void helpme(TreeNode *root,long long ts){
        if(!root)return;
        if(ts==root->val)ans++;
        helpme(root->left,ts-root->val);
        helpme(root->right,ts-root->val);
    }
};