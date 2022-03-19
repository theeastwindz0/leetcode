class Solution {
public:
    double average(vector<int>& salary) {
       double avg=0.0;
        int minS=INT_MAX,maxS=0;
        for(int i=0;i<salary.size();i++)
        {
            minS=min(minS,salary[i]);
            maxS=max(maxS,salary[i]);
            avg+=salary[i];
        }

        return (avg-minS-maxS)/(salary.size()-2);
        
    }
};