#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define ppb pop_back
#define TN TreeNode
#define LN ListNode
class Solution {
public:
    bool check(v<int>v1,v<int>v2){
        f(0,26)if(v1[i]!=v2[i])return 0;
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
       if(size(s1)>size(s2))return 0;
        v<int>v1(26,0),v2(26,0);
        f(0,size(s1)){v1[s1[i]-'a']++;v2[s2[i]-'a']++;}
        int ct=0;
        f(size(s1),size(s2)){
            if(check(v1,v2))return 1;
            else{v2[s2[i]-'a']++;v2[s2[i-size(s1)]-'a']--;}
            //L check
            // if(i==size(s2)-1 && check(v1,v2))return 1;
        }
        if(check(v1,v2))return 1;
        
        return 0;
    }
};