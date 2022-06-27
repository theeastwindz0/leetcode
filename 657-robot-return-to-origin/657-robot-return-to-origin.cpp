class Solution {
public:
    bool judgeCircle(string moves) {
        int xp=0,yp=0;
        for(int i=0;i<size(moves);i++){
            if(moves[i]=='U')yp++;
            else if(moves[i]=='D')yp--;
            else if(moves[i]=='L')xp--;
            else xp++;
        }
        if(!xp && !yp)return 1;
        return 0;
    }
};