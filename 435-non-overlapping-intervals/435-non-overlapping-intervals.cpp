bool comp(vector<int> a,vector<int> b) {
	return a[1]<b[1];
    }
class Solution {
public:
    //If you are watching this solution then I would like to tell leetcode online judge got psychopathic tendencies
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       // sort(intervals.begin(),intervals.end(),comp);
       //  int prev=0,ct=0;
       //  for(int i=1;i<intervals.size();i++){
       //      if(intervals[prev][1]>intervals[i][0]) ct++;
       //      else prev=i;
       //  }
       //  return ct;
        
        sort(intervals.begin(),intervals.end());
        
        int count=0;
        int i=0;
        int j=1;
        int n=intervals.size();
        while(j<n){
            if(intervals[i][1]<=intervals[j][0])
            {
                i=j;
                j++;
            }
            else if(intervals[i][1]>=intervals[j][1])
            {
                count+=1;
                i=j;
                j++;
            }
            else if(intervals[i][1]>intervals[j][0])
            {
                count+=1;
                j++;
            }
        }
        return count;
    }
    
    
};