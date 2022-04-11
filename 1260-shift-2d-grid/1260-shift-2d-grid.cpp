class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>v1;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                v1.push_back(grid[i][j]);
        int rS=grid.size(),cS=grid[0].size();
        k=k%v1.size();
        if(k==0)return grid;
        k=v1.size()-k;
        grid.clear();
        for(int i=0;i<rS;i++){
            vector<int>v2;
            for(int j=0;j<cS;j++){
                v2.push_back(v1[k]);
                k++;
                if(k>v1.size()-1)k=0;
            }
            grid.push_back(v2);
        }
        return grid;
    }
};