#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    v<int> fc(string word){
            v<int>temp(26,0);
            f(0,size(word))temp[word[i]-'a']++;
            return temp;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       v<int> bfreq(26,0),temp;
        fit(words2){
            temp=fc(it);
            f(0,26)bfreq[i]=max(bfreq[i],temp[i]);
        }
        v<string>ans;
        // f(0,26)cout<<(char)(i+'a')<<" "<<bfreq[i]<<endl;
        fit(words1){
            temp=fc(it);
            f(0,26){
                if(temp[i]<bfreq[i])break;
                if(i==25)ans.pb(it);
            }
        }
        
        return ans;
        
    }
};