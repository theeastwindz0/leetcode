class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> m1;
        if(size(s)<10)return {};
        //if size would be 10 then it will be only runnign for i<1 which means once
        //substr (position, total character to include) different from what we use in JAVA
        for(int i=0;i<size(s)-9;i++)m1[s.substr(i,10)]++;
        vector<string>ans;
        for(auto it:m1)if(it.second>1)ans.push_back(it.first);
                
        return ans;
    }
};