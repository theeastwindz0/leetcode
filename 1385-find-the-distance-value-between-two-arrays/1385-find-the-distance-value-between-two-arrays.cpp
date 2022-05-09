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
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        f(0,arr1.size()){
            int ct=0;
            f2(j,0,arr2.size()){
                if(abs(arr1[i]-arr2[j])<=d){ct++;break;}
            }
            if(!ct)ans++;
        }
        return ans;
    }
};