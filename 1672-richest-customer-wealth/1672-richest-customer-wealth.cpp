class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
     int max=0,maxLen=accounts[0].size(),j=0,i=0;
        // int sumVec[accounts.size()];
        int *sumVec = (int*)calloc(accounts.size(), sizeof(int));
        while(i!=accounts.size())
        {
        sumVec[i]=sumVec[i]+accounts[i][j];
            if(sumVec[i]>max)
                max=sumVec[i];
        i++;
        if(i==accounts.size())
        {
            i=0;
            j++;
            if(j==maxLen)
                break;
        }
    }
        
        
        
        return max;
    }
};