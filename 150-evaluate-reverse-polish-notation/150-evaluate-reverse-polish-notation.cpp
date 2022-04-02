class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s1;
        for(auto it:tokens){
            if(it=="+" || it=="-" || it=="*" || it=="/" ){
                int sum=0;
                int b=s1.top();s1.pop();
                int a=s1.top();s1.pop();
                if(it=="-")sum=a-b;
                if(it=="*")sum=a*b;
                if(it=="/")sum=a/b;
                if(it=="+")sum=a+b;
                
                s1.push(sum);}else s1.push(stoi(it));
        }
        return s1.top();
    }
};