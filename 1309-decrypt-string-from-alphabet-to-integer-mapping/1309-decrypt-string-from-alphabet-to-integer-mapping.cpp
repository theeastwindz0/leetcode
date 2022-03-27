class Solution {
public:
    string freqAlphabets(string s) {
        string s1;
        for(int i=s.length()-1;i>=0;i--)
        {
            int sum=0;
            if(s[i]=='#'){
                sum=s[i-1]-48;
                sum+=(s[i-2]-48)*10+96;
                i--;i--;
            }
            else
            {
            sum=s[i]-48+96;
            }
            s1.push_back((char)sum);
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};