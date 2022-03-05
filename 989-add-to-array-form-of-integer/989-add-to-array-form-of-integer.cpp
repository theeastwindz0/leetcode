class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1,num1=0,num2=0,rem=0,sum=0;
        vector <int> v2;
        while(i>=0 || k!=0 )
        {
            if(i<0)
                num1=0;
            else
                num1=num[i];
            if(k<=0)
                num2=0;
            else
                num2=k%10;
                
            sum=(num1+num2+rem);
            rem=sum%10;
            v2.push_back(rem);
            rem=sum/10;
            i--;

            k=k/10;  
        }
        
        if(rem!=0)
            v2.push_back(rem);
        
        reverse(v2.begin(),v2.end());
        return v2;
    }
};