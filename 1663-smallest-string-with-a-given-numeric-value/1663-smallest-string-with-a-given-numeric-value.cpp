class Solution {
public:
    string getSmallestString(int n, int k) {
        string s;
        int rem=k-n;
        for(int i=0;i<n;i++)
            s+='a';
        n=n-1;
        
        while(n>=0)
        {

            if(rem<26)
            {
                s[n]='a'+rem;
                break;
            }
            else
            {
                s[n]='a'+25;
                rem=rem-25;
                n--;
            }
        }
        
        return s;
    }
};