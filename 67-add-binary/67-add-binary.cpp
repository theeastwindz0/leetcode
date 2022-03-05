class Solution {
public:
    string addBinary(string a, string b) {
        int num1=0,num2=0,rem=0,sum=0;
        string word="";
        int maxLen=max(a.length(),b.length());
        int minLen=min(a.length(),b.length());
        
        for(int i=0;i<maxLen-minLen;i++)
        {
            if(a.length()>b.length())
                b="0"+b;
            else
                a="0"+a;
        }
        
        for(int i=maxLen-1;i>=0;i--)
        {
            num1=(int)a[i];
            num2=(int)b[i];
            if(num1!=0)
                num1-=48;
            if(num2!=0)
                num2-=48;
            
            sum=(rem+num1+num2);
            rem=sum%2;
            word=(char)(rem+48)+word;            
            rem=sum/2;
            
            if(i==0 && rem==1)
                word="1"+word;   
        }
        
        
        return word;
    }
};