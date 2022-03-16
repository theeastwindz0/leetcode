class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0,num=0,num2=0;
        string s1="";
        for(int i=0;i<s.length();i++)
        {
            num=s[i];
             if(num>=97 && num<=122)
                num=num-97+1;
            num2=0;
            if(num>=10)
            {
                num2=num%10;
                num=num/10;
            }
            sum+=num+num2;
        }
        int ct=1,newSum=0,sHold=sum;
        while(ct<k)
        {
        cout<<"test";
            while(sum!=0)
            {
                int rem=sum%10;
                newSum+=rem;
                sum/=10;
            }
            sum=newSum;
            sHold=newSum;
            newSum=0;
            ct++;            
        }
        return sHold;
    }
};