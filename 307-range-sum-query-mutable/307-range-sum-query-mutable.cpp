class NumArray {
public:
    vector<int>v1;
    int sum=0;
    NumArray(vector<int>& nums) {
        v1=nums;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
    }
    
    void update(int index, int val) {
        // int y=index==0?0:sum[index-1];
        // int diff=val-(sum[index]-y);
        // for(int i=index;i<sum.size();i++)sum[i]+=diff;
        // sum[index]=val;
        sum-=v1[index];
        v1[index]=val;
        sum+=val;
    }
    
    int sumRange(int left, int right) {
        int ans=sum;
        // if(left==0)ans=sum[right];
        // else ans=sum[right]-sum[left-1];
        // return ans;
        // return ans;
        for(int i=0;i<left;i++)ans-=v1[i];
        for(int i=right+1;i<v1.size();i++)ans-=v1[i];
        return ans;
    }
    
 
};
