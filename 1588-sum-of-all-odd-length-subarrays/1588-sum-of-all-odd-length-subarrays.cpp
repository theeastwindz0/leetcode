class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            int st=i+1;
            int lt=arr.size()-i;
            int tsr=lt*st;
            if(tsr%2!=0) tsr++;
            tsr=tsr/2;
            sum+=tsr*arr[i];
        }
    return sum;
    }
};