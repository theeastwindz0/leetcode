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
    bool helpme(int i,int j,int cl, v<v<char>> &v1,string word){
        if(size(word)==cl)return true;
        if(i<0 || j<0 || i>=v1.size() || j>=v1[0].size() ||v1[i][j]!=word[cl])return  false;
        v1[i][j]='1';
        
        bool status=helpme(i+1,j,cl+1,v1,word) || helpme(i-1,j,cl+1,v1,word) || helpme(i,j+1,cl+1,v1,word) || helpme(i,j-1,cl+1,v1,word);
        
        v1[i][j]=word[cl];
        return status;
    }
    bool exist(vector<vector<char>>& board, string word) {
        f(0,board.size()){
            f2(j,0,board[0].size()){
                if(board[i][j]==word[0] && helpme(i,j,0,board,word))return true;
            }
        }
        return false;
    }
};