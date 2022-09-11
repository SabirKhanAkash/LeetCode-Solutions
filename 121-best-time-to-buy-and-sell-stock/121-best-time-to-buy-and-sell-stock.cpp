class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy = 10000, maxSell = 0;
        

        for(int i=0; i<prices.size(); i++)
        {
            minBuy = min(minBuy,prices[i]);
            maxSell = max(maxSell, (prices[i] - minBuy));
        }
        return maxSell;
    }
};