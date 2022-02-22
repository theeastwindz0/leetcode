class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum=0,powNum=1;
        for(int i=0;i<columnTitle.size();i++)
        {
            char current=columnTitle[i];
            char key=columnTitle[i]-64;
            powNum=pow(26,columnTitle.size()-i-1);
            sum+=powNum*key;
        }
        return sum;
    }
};