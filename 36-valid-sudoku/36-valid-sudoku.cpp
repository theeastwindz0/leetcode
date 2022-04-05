class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      vector<set<int>> row(9),col(9),box(9);
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]>=48 && board[i][j]<=57){
                    int num=board[i][j]-'0';
                if(row[i].count(num) || col[j].count(num)|| box[((i/3)*3 + j/3)].count(num))return false;
                    row[i].insert(num);
                    box[((i/3)*3 + j/3)].insert(num);
                    col[j].insert(num);
                }
            }
        }
        return true;
    }
};