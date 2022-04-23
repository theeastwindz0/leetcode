class Solution {
public:
    string intToRoman(int num) {
        map<int,string> m1;
        m1.insert({1000,"M"});
        m1.insert({900,"CM"});
        m1.insert({500,"D"});
        m1.insert({400,"CD"});
        m1.insert({100,"C"});
        m1.insert({90,"XC"});
        m1.insert({50,"L"});
        m1.insert({40,"XL"});
        m1.insert({10,"X"});
        m1.insert({9,"IX"});
        m1.insert({5,"V"});
        m1.insert({4,"IV"});
        m1.insert({1,"I"});
        string ans="";
        
        map<int,string>::iterator it=m1.end();
        it--;
        while(num){
            if(num>=it->first){
                ans+=m1[it->first];
                num-=it->first;
                cout<<it->first<<endl;
            }
            else it--;
        }
        
        return ans;
    }
};