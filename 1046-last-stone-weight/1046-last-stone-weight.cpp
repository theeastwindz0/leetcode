class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> d1;
        for(int i=0;i<stones.size();i++)d1.push(stones[i]);
        int a=0,b=0;
        // priority_queue<int> h=d1;
        // while(!h.empty()){cout<<h.top()<<" ";h.pop();}
        while(!d1.empty()){
            if(d1.size()==1)return d1.top();
            a=d1.top();d1.pop();
            b=d1.top();d1.pop();
            if(a!=b)d1.push(a-b);
        }
        return 0;
        
        
    }
};
