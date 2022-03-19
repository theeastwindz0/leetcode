class Solution {
public:
    int maxVowels(string s, int k) {
        int ct=0,ct2=0;
        
        for(int i=0;i<s.length();i++)
        {
            char z=s[i];
            if(z=='a' || z=='e' || z=='i' || z=='o' || z=='u') ct++;
            
            if(i>=k)
            {
                z=s[i-k];
                if(z=='a' || z=='e' || z=='i' || z=='o' || z=='u') ct--;
            }
            ct2=max(ct2,ct);
            
        }
        
        return ct2;
    }
};