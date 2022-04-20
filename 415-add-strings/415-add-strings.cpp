class Solution {
public:
    string addStrings(string num1, string num2) {
        int l1=size(num1)-1,l2=size(num2)-1;
        int ct=1,rem=0;
        string ans="";
        while(ct){
            int no1=(l1>=0)?num1[l1--]-'0':0;
            int no2=(l2>=0)?num2[l2--]-'0':0;
            // cout<<no1<<" "<<no2<<endl;
            int sum=no2+no1+rem;
            // cout<<sum<<endl;
            ans.push_back((sum%10)+'0');
            rem=sum/10;
            if(l1<0 && l2<0 && rem==0)ct=0;
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};