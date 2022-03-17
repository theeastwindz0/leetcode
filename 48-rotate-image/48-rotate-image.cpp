class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> v1=matrix;
        int vLen=matrix.size();
        matrix.clear();
        for(int i=0;i<vLen;i++)
        {
            vector<int> v2;
            for(int j=vLen-1;j>=0;j--)
            {
                v2.push_back(v1[j][i]);
            }
            matrix.push_back(v2);
        }
    }
};