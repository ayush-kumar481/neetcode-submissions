class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        int profit = 0;
        for(int i = 0; i<prices.size(); i++){
            int current = prices[i];
            minPrice = min(minPrice,prices[i]);
            profit = current - minPrice;
            maxProfit = max(profit,maxProfit);
        }
        return maxProfit;
    }
};
