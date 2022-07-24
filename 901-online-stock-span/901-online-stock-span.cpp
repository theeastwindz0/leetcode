class StockSpanner {
    stack<pair<int,int>>s1;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans=1;
        while(!s1.empty() && price>=s1.top().first)ans+=s1.top().second,s1.pop();
        s1.push({price,ans});
        return ans;
    }
};
