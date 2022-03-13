class Solution {
public:
    bool isValid(string s) {
      stack <char> st1;
        for(int i=0;i<s.length();i++)
        {
            char z=s[i];
            if(z=='{' || z=='(' || z=='[')
                st1.push(z);
            else if(z=='}' || z==')' || z==']')
            {
                if(st1.empty())
                    return false;
                else if(z==')' && st1.top()!='(')
                    return false;
                else if(z==']' && st1.top()!='[')
                    return false;
                else if(z=='}' && st1.top()!='{' )
                    return false;
                else
                    st1.pop();
            }
        }
       
        if(st1.empty())
            return true;
        else 
            return false;
    }
};