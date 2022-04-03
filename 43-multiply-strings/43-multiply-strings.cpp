class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")return "0";
        vector<int> v1(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;i--){
            for(int j=num2.size()-1;j>=0;j--){
                v1[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                v1[i+j]+=v1[i+j+1]/10;
                v1[i+j+1]%=10;
            }
        }
        string ans="";
        int i=0;
        for( i=0;i<v1.size();i++)if(v1[i]!=0)break;
        for(;i<v1.size();i++)ans.push_back(v1[i]+'0');
        
        return ans;
    }
};