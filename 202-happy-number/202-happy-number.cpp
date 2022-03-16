class Solution {
public:
        int sum=0,d=0;
        bool ans;
    bool isHappy(int n) {
        sum=sumFinder(n);
        
        while(sum)
        {
            sum=sumFinder(n);
            cout<<sum<<endl;
            if(sum==1 || sum==7)
            {
                ans=true;
                break;
            }
            else if(sum>1 && sum<10)
            {
                ans=false;
                break;
            }
            
            n=sum;
        }
        return ans;
    }
    
    int sumFinder(int n)
    {
        int sum=0;
            while(n!=0)
            {
                d=n%10;
                sum+=pow(d,2);
                n=n/10;
            }
        return sum;
    }
};