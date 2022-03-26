class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.length();i++)
        {
             if(command[i]==')' && command[i-1]=='(' && i!=0) ans+='o';
            else if(command[i]!='(' && command[i]!=')') ans+=command[i];
        }
        return ans;
    }
};