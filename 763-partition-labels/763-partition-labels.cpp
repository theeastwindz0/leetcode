class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v1(26,0),v2;
        for(int i=0;i<size(s);i++)v1[s[i]-'a']=i;
         int start=0,end=0;
        for(int i=0;i<size(s);i++)
        {
            end=max(end,v1[s[i]-'a']);
            if(i==end){
                v2.push_back(end-start+1);
                start=i+1;
            }
        }
        return v2;        
    }
};