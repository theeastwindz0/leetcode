class Solution {
public:
    int strStr(string haystack, string needle) {
        if(size(needle)>size(haystack))return -1;
        if(size(needle)==0)return 0;
        int j=0,i=0;
		for( i = 0 ; i < size(haystack) ; i++){

			if(haystack[i] == needle[j]){
				j++;
			}else{
				i = i-j;
				j = 0;
			}
			if(j==size(needle)){
				return i - j +1 ;
			}

		}
		return -1;
    }
};