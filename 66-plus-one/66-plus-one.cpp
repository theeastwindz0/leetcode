class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> arr;

        if(digits[digits.size()-1]!=9)
        {
            digits[digits.size()-1]+=1;
            return digits;
        }
        else
        {
             int i=digits.size()-1,j=0,rem=0,last=0;
            for(;i>=0;i--)
            {
                if(i==digits.size()-1)
                {
                    last=digits[i]+1;
                }
                else
                {
                    last=digits[i]+last/10;
                }
                
                int rem=last%10;
                arr.push_back(rem);
                rem=last/10;
                
                if(i==0&&rem!=0)
                    arr.push_back(rem);
            }
            
            reverse(arr.begin(),arr.end());
            
            
        }
        
        
        
        return arr;
    }
};