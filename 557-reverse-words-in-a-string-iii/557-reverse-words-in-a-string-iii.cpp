class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        int start=0;
        for(int i=0;i<size(s);i++){
            if(s[i]==' '){reverse(s.begin()+start,s.begin()+i);start=i+1;}
        }
        s.pop_back();
        
        return s;
    }
};