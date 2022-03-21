class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index=-1,sum=0,pSum=INT_MAX;
        for(int i=0;i<points.size();i++)
            if(points[i][0]==x||points[i][1]==y)
            {
                sum=abs(x - points[i][0]) + abs(y - points[i][1]);
                if(sum<pSum)
                {
                    pSum=sum;
                    index=i;
                }
            }
        return index;
    }
};