class Solution {
public:
    int romanToInt(string s) {
       map<char,int> m1;
        m1.insert({'I',1});
        m1.insert({'V',5});
        m1.insert({'X',10});
        m1.insert({'L',50});
        m1.insert({'C',100});
        m1.insert({'D',500});
        m1.insert({'M',1000});
        int sum=0;
        for(int i=size(s)-1;i>=0;i--){
            int ct=1;
           if(i!=0)if(m1[s[i]]>m1[s[i-1]]){ sum+=(m1[s[i]]-m1[s[i-1]]);i--;ct=0;}
           if(ct) sum+=m1[s[i]];
        }
        
        return sum;
    }
};

