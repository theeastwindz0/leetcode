class Solution {
public:
    int climbStairs(int n) {
        long a=0,b=1;
        long sum=0;
        for(int i=-1;i<n;i++)
        {
           sum= a+b;
            a=b;
            b=sum;
        }
        
        
        return (int)a;
    }
};