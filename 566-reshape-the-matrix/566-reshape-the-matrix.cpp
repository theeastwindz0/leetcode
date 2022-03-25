class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c!=mat.size()*mat[0].size()) return mat;
        deque <int> d1;
        int i=0,j=0;
        while(i!=mat.size())
        {
            d1.push_back(mat[i][j]);
            j++;
            if(j==mat[0].size()){j=0;i++;}
        }
        deque<int>::iterator it=d1.begin();
        mat.clear();
        for(i=0;i<r;i++)
        {
            vector<int> v1;
            for(j=0;j<c;j++)
            {
                v1.push_back(*it++);
            }
            mat.push_back(v1);
        }
                
        return mat;
    }
};