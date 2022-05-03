#define long long ll
#define f(a,b) for(int i=a;i<b;i++)
#define fr(it,nums) for(auto &it:nums)

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int wSize=size(strs[0]);
        int ct=0;
        f(0,wSize){
            for(int j=1;j<strs.size();j++){
                if(strs[j-1][i]>strs[j][i]){ct++;break;}
            }
        }
        return ct;
    }
};

