class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        //Question same as when we have to find the next greater element we generally do this with stack for optimised solution
        stack<int>s;vector<int>v1(t.size(),0);
        for(int i=t.size()-1;i>=0;i--){
            while(!s.empty() && t[i]>=t[s.top()])s.pop();
            if(!s.empty())v1[i]=s.top()-i;
            // vector is filled with 0s we don't care for else condition 
            s.push(i);
        }
        return v1;
    }
};