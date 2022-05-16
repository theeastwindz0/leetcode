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
    int vowelChecker(char z){
        if(z=='a' || z=='e' || z=='i' || z=='o' || z=='u')return 1;
        else return 0;
    }
    int countVowelSubstrings(string word) {
        int ans=0;
        f(0,size(word)){
        us<char>s1;
            f2(j,i,size(word)){
                if(!vowelChecker(word[j]))break;
                s1.insert(word[j]);
                if(s1.size()==5)ans++;
            }
        }
        return ans;
    }
};