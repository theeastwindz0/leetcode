#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(it,nums) for(auto &it:nums)
#define v vector

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int cG=arr[arr.size()-1];
        arr[arr.size()-1]=-1;
        fr(arr.size()-2,0){
            int temp=max(cG,arr[i]);
            arr[i]=cG;
            cG=temp;
        }
        return arr;
    }
};