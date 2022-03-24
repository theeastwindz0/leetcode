class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        // int ct=1,ans=0,i=0;
        // while(ct  )
        // {
        // if(people[i]<limit && people[i]+people[i+1]<limit) ans+=people[i];
        // i++;
        // if(i==people.size()-1 || people[i]>=limit) ct=0;
        // }
        // if(ans%limit==0) ans=ans/limit;
        // else ans=ans/limit+1;
        // cout<<ans;
        // i=0,ct=1;
        // while(ct)
        // {
        // if(people[i]>=limit) ans++;
        // i++;
        // if(i==people.size()) ct=0;
        // }
        int i=0,j=people.size()-1,ans=0;
        while(i<=j)
        {
            ans++;
            if(people[i]+people[j]<=limit) i++;
            j--;
        }
        return ans;
    }
};