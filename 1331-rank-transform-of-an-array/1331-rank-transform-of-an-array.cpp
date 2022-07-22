#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define f2(x,a,b) for(int x=a;x<b;x++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
#define pb push_back
#define ppb pop_back
#define p priority_queue
#define um unordered_map
#define us unordered_set
#define TN TreeNode
#define LN ListNode
#define endl "\n"
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    set<int> st(arr.begin(),arr.end());
    // fit(st)cout<<it<<" ";
	unordered_map<int,int> m;
	int rank=1;
	fit(st)  m[it]=rank++;
	fit(arr) it= m[it];
	return arr;
    }
};