class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s1;
        for(int i=0;i<ops.size();i++){
            
            if(ops[i]=="C")s1.pop();
            else if(ops[i]=="D")s1.push(s1.top()*2);
            else if(ops[i]=="+"){
                int b=s1.top();s1.pop();
                int a=s1.top();s1.pop();
                s1.push(a);
                s1.push(b);
                s1.push(a+b);
            }
            else s1.push(stoi(ops[i]));
        }
        int sum=0;
            while(!s1.empty()){
                sum+=s1.top();
                s1.pop();
            }
            return sum;
    }
};