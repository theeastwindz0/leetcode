class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
     sort(folder.begin(),folder.end());
        vector<string>ans;
        ans.push_back(folder[0]);
        for(int i=1;i<folder.size();i++){
            string parent=ans[ans.size()-1];
            if(folder[i].substr(0,parent.size()+1)!=parent+'/')ans.push_back(folder[i]);
        }
        return ans;
    }
};