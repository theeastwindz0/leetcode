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
    int longestBeautifulSubstring(string word) {
        string check="aeiouu";
        us<char>s1;
        word.pb('z');
        int ct=0,ans=0,ct2=0;
        f(0,size(word)){
            // cout<<s1.size()<<" "<<word[i]<<endl;
            if(word[i]==check[ct]){ct2++;s1.insert(word[i]);}
            else if(word[i]==check[ct+1]){ct++;ct2++;s1.insert(word[i]);}
            else{
                if(s1.size()==5)ans=max(ans,ct2);
                s1.clear();
                ct=0;ct2=0;
                if(word[i]=='a')i=i-1;
            }
        }
        return ans;
    }
};