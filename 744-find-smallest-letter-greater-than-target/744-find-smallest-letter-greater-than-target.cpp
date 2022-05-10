class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int f=0,l=letters.size()-1;
        while(f<=l){
            int m=(l-f)/2+f;
            if(letters[m]>target)l=m-1;
            else f=m+1;
        }
        return letters[f%letters.size()];
    }
};