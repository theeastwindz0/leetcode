class NumMatrix {
public:
    vector<vector<int>>v1;
    NumMatrix(vector<vector<int>>& matrix) {
        v1=matrix;
        for(int i=0;i<matrix.size();i++)
            for(int j=1;j<matrix[0].size();j++)
                v1[i][j]+=v1[i][j-1];
        

    }
    
    int sumRegion(int row3, int col1, int row2, int col2) {
        int sum=0;
        while(row3<=row2)
        {
            if(col1!=0) sum+=v1[row3][col2]-v1[row3][col1-1];
            else sum+=v1[row3][col2];
            row3++;
        }
        return sum;
    }
};

