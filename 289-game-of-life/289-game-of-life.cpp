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
    int livingN(int i,int j,v<v<int>> &board){
        int ct=0;
        if(i>0 && board[i-1][j])ct++;
        if(i<board.size()-1 && board[i+1][j])ct++;
        if(j>0 && board[i][j-1])ct++;
        if(j<board[0].size()-1 && board[i][j+1])ct++;
        
        
        if(i>0 && j>0 && board[i-1][j-1])ct++;
        if(i>0 && j<board[0].size()-1 && board[i-1][j+1])ct++;
        if(j>0 && i<board.size()-1 && board[i+1][j-1])ct++;
        if(i<board.size()-1 && j<board[0].size( )-1 && board[i+1][j+1])ct++;
        // cout<<ct<<endl;
        return ct;
    }
    void gameOfLife(vector<vector<int>>& board) {
       v<v<int>> temp=board;
        f(0,board.size()){
            f2(j,0,board[0].size()){
                int n=livingN(i,j,temp);
                if(board[i][j]==0 && n==3)board[i][j]=1;
                else{
                    if(n>3 || n<2)board[i][j]=0;
                }
            }
        }
    }
};