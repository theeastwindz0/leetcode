#define f(a,b) for(int i=a;i<b;i++)
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0,ct=0; 
            f(0,size(s)){
            if(s[i]=='L')ct++;else ct--;
                if(ct==0)ans++;
            }
        return ans;
    }
};