class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
     vector <pair<int,int>> s1;
        for(int i=0;i<arr.size();i++)
        {
            int n=arr[i],ct=0;
            while(n)
            {
                if(n%2!=0) ct++;
                n=n/2;
            }
            s1.push_back(make_pair(ct,arr[i]));
        }
        sort(s1.begin(),s1.end());
        vector<int> v1;
        for(auto it:s1)v1.push_back(it.second);
        return v1;
    }
};