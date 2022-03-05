class Solution {
public:
    int lengthOfLastWord(string s) {
        int max=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            char z=s[i];
            if(z!=' ')
            {
                max=max+1;
                if(i!=0)
                    if(s[i-1]==' ')
                    break;
            }
        }
        
        cout<<max;
        
        return max;
    }
};