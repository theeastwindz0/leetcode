class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mVal=0;
        int minPrice=prices[0];
        for(int i=1;i<prices.size();i++)
        {
          if(minPrice<prices[i])
                mVal=max(mVal,prices[i]-minPrice);
          else
             minPrice=prices[i];
                
        }
             return mVal;
        
    }
};