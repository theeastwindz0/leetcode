class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x=coordinates[1][0]-coordinates[0][0],y=coordinates[1][1]-coordinates[0][1];
        cout<<x+y<<endl;
        for(int i=0;i<coordinates.size();i++)
        {
        int x1=coordinates[i][0]-coordinates[0][0];
        int y2=coordinates[i][1]-coordinates[0][1];
            
        if(x1*y!=y2*x)
            return false;
        }
        
        return true;
    }
};