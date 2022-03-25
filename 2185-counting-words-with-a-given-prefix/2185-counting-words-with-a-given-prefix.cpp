class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ct=0,ct2=0;
        for(int i=0;i<words.size();i++)
        {
            ct2=0;
            int maxSize=min(pref.length(),words[i].length());
            for(int j=0;j<maxSize;j++)
                if(pref[j]==words[i][j]){ct2++;}
            
        if(ct2==pref.length())ct++;
        }
        
        return ct;
    }
};