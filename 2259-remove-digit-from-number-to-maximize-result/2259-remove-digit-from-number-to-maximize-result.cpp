class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans="";
        for(int i=0;i<size(number);i++){
            if(number[i]==digit){
                string z=number.substr(0,i)+number.substr(i+1);
                if(ans=="")ans=z;
                else ans=max(ans,z);
            }
        }
        return ans;
    }
};