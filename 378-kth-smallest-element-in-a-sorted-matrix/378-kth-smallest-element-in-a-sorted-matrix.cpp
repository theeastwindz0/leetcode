class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> pq1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                pq1.push(matrix[i][j]);
            }
        }
        k--;
        while(k--)pq1.pop();
        return pq1.top();
    }
};