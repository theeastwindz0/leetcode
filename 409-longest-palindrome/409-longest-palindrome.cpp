class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m1;
        
        for(int i=0;i<size(s);i++) m1[s[i]]++;
        int num1=0,num2=0,ans=0;
        // for(auto it:m1){
        //     if(it.second%2!=0 && it.second>num2)num2=it.second;
        //     if(it.second%2==0)ans+=it.second;
        // }
        // ans+=num2;
        //We can remove one char from odd to make it even 
        int og=0;
        cout<<(10>0);
        for(auto it:m1) if(it.second%2!=0)og++;
        return size(s)-og+(og>0);
    }
};

// abccccdd
// 421
