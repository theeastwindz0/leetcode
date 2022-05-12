class Solution {
public:
    
    void helpme(int i,int j,vector<vector<int>>&v1,int newColor,int fVal)
    {
        if(i<0 || j<0 || i>=v1.size() || j>=v1[0].size() || v1[i][j]!=fVal)return;
        v1[i][j]=newColor;
        helpme(i+1,j,v1,newColor,fVal);
        helpme(i-1,j,v1,newColor,fVal);
        helpme(i,j+1,v1,newColor,fVal);
        helpme(i,j-1,v1,newColor,fVal);
        
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)return image;
        helpme(sr,sc,image,newColor,image[sr][sc]);
        return image;
    }
};