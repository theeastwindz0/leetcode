class Solution {
public:
    bool rotateString(string s, string goal) {
       // if(size(s)!=size(goal))return false;
        if(s==goal)return 1;
        queue<char>q1,q2;
        for(int i=0;i<size(s);i++){q1.push(s[i]);q2.push(goal[i]);}
        int i=0;for(int i=0;i<size(s);i++)
        {
            q1.push(q1.front());q1.pop();
            if(q1==q2)return 1;
        }
        return 0;
        
    }
};