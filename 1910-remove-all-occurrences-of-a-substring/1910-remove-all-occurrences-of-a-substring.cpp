class Solution {
public:
    string removeOccurrences(string s, string part) {
       for(int i=0;i<size(s);i++){
           if(s[i]==part[0] && s.substr(i,size(part))==part){
               //Removing
               string str2="";
               for(int j=0;j<i;j++)str2+=s[j];
               for(int j=i+size(part);j<size(s);j++)str2+=s[j];
               cout<<str2<<endl;
               s=str2;
               i=-1;
           }
       } 
        return s;
    }
};

