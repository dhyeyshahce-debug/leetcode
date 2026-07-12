// Last updated: 7/12/2026, 11:35:17 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_price=0;
        int bestBuy=prices[0];
        int maxProfit=0;

        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>bestBuy)
            {
                maxProfit=max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};