class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i=0;
        vector <string> v1;
        for(;i<n;i++)
        {
            int num=(i+1);
            if(num%3==0 && num%5==0)
                v1.push_back("FizzBuzz");
            else if(num%5==0)
                v1.push_back("Buzz");
            else if(num%3==0)
                v1.push_back("Fizz");
            else
                v1.push_back(to_string(num));
            
                
        }
        
        return v1;
    }
};