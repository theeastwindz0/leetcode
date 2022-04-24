class Solution {
public:
    string modifyString(string s) {
        for(int i=0;i<size(s);i++){
            int left=(i==0)?1:s[i-1];
            int right=(i==size(s)-1)?1:s[i+1];
            if(left==63)left=0;
            if(right==63)right=0;
            if(s[i]=='?'){
                cout<<left<<" "<<right<<endl;
                for(int j=97;j<=122;j++)if(j!=left && j!=right){s[i]=j;break;}   
            }
            // cout<<s[i]<<endl;
        }
        return s;
    }
};