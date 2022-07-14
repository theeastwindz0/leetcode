#define long long ll
#define f(a,b) for(int i=a;i<b;i++)
#define fr(it,nums) for(auto &it:nums)

// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//       map<int,int> m1;
//         f(0,inorder.size())m1[inorder[i]]=i;
        
//         TreeNode *root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m1);
//         return root;
//     }
    
//     TreeNode * buildTree(vector<int>pre,int preS,int preE,vector<int>ino,int inoS,int inoE,map<int,int>m1){
//         if(preS>preE || inoS>inoE)return NULL;
//         TreeNode *root=new TreeNode(pre[preS]);
        
//         int inRoot=m1[root->val];
//         int numsLeft=inRoot-inoS;
        
//         root->left= buildTree(pre,preS+1,preS+numsLeft,ino,inoS,inRoot-1,m1);
//         root->right=buildTree(pre,preS+numsLeft+1,preE,ino,inRoot+1,inoE,m1);
        
//         return root;
//     }
// };

class Solution{
public:
    map<int,int> m1;
    int preInd=0;
TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    f(0,inorder.size())m1[inorder[i]]=i;
    return createTree(preorder,inorder,0,inorder.size() - 1);
}
TreeNode* createTree(vector<int>& preorder, vector<int>& inorder,int start, int end){
    if(start > end){
        return NULL;
    }
    TreeNode* node=new TreeNode(preorder[preInd++]);
    int pos=m1[node->val];
        
    node->left =createTree(preorder, inorder,start,pos-1);
    node->right =createTree(preorder, inorder, pos+1,end);
    return node;
}
};