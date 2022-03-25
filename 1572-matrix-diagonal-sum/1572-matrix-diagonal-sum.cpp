class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,ct=0,ct2=mat[0].size()-1;
        for(int i=0;i<mat.size();i++)
        {
            sum+=mat[i][ct]+mat[i][ct2];
            ct++;
            ct2--;
        }
        if(mat[0].size()%2!=0) sum-=mat[mat.size()/2][mat[0].size()/2];
        
        return sum;
    }
};