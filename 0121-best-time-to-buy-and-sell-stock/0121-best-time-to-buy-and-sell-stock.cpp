class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            //Agar Price Kam hai to Stock Khareed lenge
            if (prices[i]<buyPrice) { 
                buyPrice = prices[i];
            }

            // Agar Profit jada hai to sell krdenge
            else if(prices[i]-buyPrice>profit) {
                profit =prices[i]-buyPrice;
            }
        }

        return profit; 
    }
};