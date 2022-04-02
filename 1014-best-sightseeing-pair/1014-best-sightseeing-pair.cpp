class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
      int lBest=values[0]+0,mSum=0;
        for(int i=1;i<values.size();i++){
            mSum=max(mSum,lBest+values[i]-i);
            lBest=max(lBest,values[i]+i);
        }
        return mSum;
    }
};