//133295 GODS

class Solution {
public:
    string convertToTitle(int columnNumber) {
        int d=0;
        string word="";
        while(columnNumber!=0)
        {
            
            d=columnNumber%26;
            if(d==0)
                d=26;
            char currentWord=char(64+d);
            
            word=currentWord+word;
            columnNumber=(columnNumber-d)/26; 
            cout<<columnNumber; 
            
        }
        cout<<word;
        return word;
        
    }
};