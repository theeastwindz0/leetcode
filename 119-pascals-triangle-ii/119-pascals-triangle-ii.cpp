class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v1={1};
       for(int i=0;i<=rowIndex;i++){
           vector<int>v2;
           for(int j=0;j<=i;j++){
               if(j==0 || j==i)
                   v2.push_back(1);
               else v2.push_back(v1[j]+v1[j-1]);
           }
           v1=v2;
       } 
        return v1;
    }
};