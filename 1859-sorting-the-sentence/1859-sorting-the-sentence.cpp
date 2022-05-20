class Solution {
public:
    string sortSentence(string s) {
        int sSize=0;
        s+=" ";
        for(int i=0;i<size(s);i++)if(s[i]==' ')sSize=max(sSize,s[i-1]-'0');
    vector<string> s1(sSize,"");
    string word;
        int i=0;
        for( i=0;i<size(s);i++){
            if(s[i]==' '){s1[s[i-1]-49]=word;word="";continue;}
            if(s[i]<48 || s[i]>57)word.push_back(s[i]);
        }
        cout<<s[i-1];
        
        if(word!="")s1[s[i-1]-49]=word;
        word="";
        for(int i=0;i<sSize;i++){
            word+=s1[i];
            if(i!=size(s1)-1)word+=" ";
        }
        return word;
    }
};