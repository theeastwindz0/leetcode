#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
class Codec {
public:

    string serialize(TreeNode* root) {
       if(!root)return "";
        string ans="";
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty()){
            TreeNode *curr=q1.front();
            q1.pop();
            if(!curr)ans.append("$.");
            else ans.append(to_string(curr->val)+".");
            if(curr){q1.push(curr->left);q1.push(curr->right);}
        }
        return ans;
    }
    
    TreeNode* deserialize(string data) {
        cout<<data;
        if(!size(data))return NULL;
        
        stringstream s(data);
        string str="";
        getline(s,str,'.');
        
        TreeNode *ans=new TreeNode(stoi(str));
        
        queue<TreeNode*>q1;
        q1.push(ans);
        while(!q1.empty()){
            TreeNode *curr=q1.front();
            q1.pop();
            //For Left Node
            getline(s,str,'.');
            if(str=="$")curr->left=NULL;
            else{
                TreeNode *curr2=new TreeNode(stoi(str));
                curr->left=curr2;
                q1.push(curr2);
            }
            
             getline(s,str,'.');
            if(str=="$")curr->right=NULL;
            else{
                TreeNode *curr2=new TreeNode(stoi(str));
                curr->right=curr2;
                q1.push(curr2);
            }    
        }
        return ans;
    }
};

