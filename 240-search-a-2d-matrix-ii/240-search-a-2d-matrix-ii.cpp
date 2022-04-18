class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=0,col=0;
//         for(int i=0;i<matrix.size();i++){
//             if(matrix[i][0]<=target && target<=matrix[i][matrix[i].size()-1]){row=i;break;}
            
//             // if(matrix[0][i]<=target && target<=matrix[matrix.size()-1][i]){col;break;};
//         }
//         cout<<row<<endl;
//         cout<<col<<endl;
//         return false;
        int n=matrix.size(),i=0,j=matrix[0].size()-1;
        
        while(j>=0 && i<n ){
            if(matrix[i][j]==target)return true;
            else if(matrix[i][j]>target)j--;
            else i++;
        }
        return false;
    }
};