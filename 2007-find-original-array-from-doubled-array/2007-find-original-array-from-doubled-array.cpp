#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define p priority_queue
#define um unordered_map
#define pb push_back
#define TN TreeNode
#define LN ListNode
#define deb cout<<it.first<<" "<<it.second<<endl;
class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0)return {};
        sort(changed.begin(),changed.end());
        um<int,int>um1;
        v<int>ans;
        fit(changed)um1[it]++;
        f(0,changed.size()){
            if(um1.find(changed[i]*2)!=um1.end() && um1[changed[i]]>0 && um1[changed[i]*2]>0){
                um1[changed[i]]--;
                um1[changed[i]*2]--;
                ans.pb(changed[i]);
            }
        }
        fit(um1)if(it.second!=0)return {};
        return ans;
        
        
//         f(0,changed.size())um1[changed[i]]=i;
//         fit(um1)deb
        
//         f(0,changed.size()){
//            if(changed[i]!=-1)if(um1.find(changed[i]*2)!=um1.end()){changed[um1[changed[i]*2]]=-1;ans.pb(changed[i]);}
//         }
//         if(ans.size()==changed.size()/2)return ans;
//         else return {};
        
    }
};
// [1,3,4,2,6,8]
// [6,3,0,1]
// [1]
// [0,0,0,0]
// [3,1,3,4,2]
// [1,4,2,1]
    