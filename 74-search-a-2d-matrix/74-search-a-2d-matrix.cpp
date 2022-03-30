class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,mid=0,high=matrix[0].size()-1,row=0;
        for(int i=0;i<matrix.size();i++)
            if(matrix[i][0]<=target && target<=matrix[i][matrix[0].size()-1]){row=i;break;}
        
        cout<<row;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(matrix[row][mid]==target)return true;
            else if(target<matrix[row][mid])high=mid-1;
            else low=mid+1;
        }
        
        return false;
    }
};