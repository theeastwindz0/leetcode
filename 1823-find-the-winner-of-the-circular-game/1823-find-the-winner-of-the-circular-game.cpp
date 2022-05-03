
#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(it,nums) for(auto &it:nums)
#define v vector
class Solution {
public:
    int findTheWinner(int n, int k) {
        int ans=0;
        queue<int>q1;
        f(1,n+1)q1.push(i);
        while(q1.size()!=1){
            f(0,k-1){
                int temp=q1.front();
                q1.push(temp);
                q1.pop();
            }
            q1.pop();
        }
        ans=q1.front();
        return ans;
    }
};
