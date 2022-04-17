class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v1;
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1,dir=0;
        
        while(top<=bottom && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++) v1.push_back(matrix[top][i]);
                top++;
            }else if(dir==1){
                for(int i=top;i<=bottom;i++) v1.push_back(matrix[i][right]);
                right--;
            }else if(dir==2){
                for(int i=right;i>=left;i--) v1.push_back(matrix[bottom][i]);
                bottom--;
            }else if(dir==3){
                for(int i=bottom;i>=top;i--) v1.push_back(matrix[i][left]);
                left++;
            }
            dir=(dir+1)%4;
        }
        return v1;
    }
};