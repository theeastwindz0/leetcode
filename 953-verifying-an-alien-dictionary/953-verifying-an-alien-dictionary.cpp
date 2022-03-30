class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> um1;
        for(int i=0;i<order.length();i++)um1[order[i]]=i;
        
        for(int i=0;i<words.size()-1;i++){
            for(int j=0;j<words[i].length();j++)
            {
                if(um1[words[i][j]]!=um1[words[i+1][j]])
                {
                    if(um1[words[i][j]]>um1[words[i+1][j]])
                        return false;
                    break;    
                }
                if(j==words[i].length()-1)
                    if(words[i].size()>words[i+1].size())return false;
            }
                    
            }
        return 1;
        
    }
};