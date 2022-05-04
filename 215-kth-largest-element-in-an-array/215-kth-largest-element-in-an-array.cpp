#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
#define fr(b,a) for(int i=b;i>=a;i--)
#define fit(nums) for(auto &it:nums)
#define v vector
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        // nums=mergeSort(nums,0,nums.size()-1);
        // fit(nums)cout<<it<<endl;
        // cout<<nums[0];
        return nums[nums.size()-k];
    }
    
    // v<int> test(v<int>v1){
    //     v1[0]=-1;
    //     return v1;
    // }
    
//     v<int> mergeSort(v<int>v1,int l,int r){
//         int m=l+(r-l)/2;
//         if(l<r){
//             mergeSort(v1,l,m);
//             mergeSort(v1,m+1,r);
//             merge(v1,l,m,r);
//         }
//         return v1;
//     }
//     v<int> merge(v<int>v1,int p,int q, int r){
//         int n1=q-p+1;
//         int n2=r-q;
//         int i=0,j=0,k=p;
//         v<int> l(n1),m(n2);
//         for(;i<n1;i++)l[i]=v1[p+i];
//         for(;j<n2;j++)m[j]=v1[q+1+j];
        
//         while(i<n1 && j<n2){
//             if(l[i]<m[j]){v1[k]=l[i];i++;}
//             else {v1[k]=m[j];j++;}
//             k++;
//         }
        
//         while(i<n1){v1[k]=l[i];i++;k++;}
//         while(j<n2){v1[k]=m[k];j++;k++;}
//         return v1;
//     }
};