class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int bP = prices[0];
        for(int i = 1; i<prices.size(); i++){
            if(prices[i] < bP){
                bP = prices[i];
            }
            int curr = prices[i] - bP;
            profit = max(profit, curr);
        }
        return profit;
    }
};
