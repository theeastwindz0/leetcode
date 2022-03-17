class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target)
            return true;
        int vLen=mat.size();
        
        int ct0=0;
        while(ct0!=4)
        {
            for(int i=0;i<vLen;i++)
            {
                for(int j=i+1;j<vLen;j++)
                {
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i = 0; i < vLen; i++){
			reverse(mat[i].begin(),mat[i].end());       
		}
            if(mat==target)
                return true;
            ct0++;
                
        }
        
        return false;
    }
};