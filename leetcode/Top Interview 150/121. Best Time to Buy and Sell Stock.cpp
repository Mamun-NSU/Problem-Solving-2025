// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX; // Initialize to the maximum possible value
        int maxProfit = 0;      // Initialize to 0 as no profit is made initially

        for (int price : prices)
        {
            if (price < minPrice)
            {
                minPrice = price; // Update the minimum price if a lower one is found
            }
            else if (price - minPrice > maxProfit)
            {
                maxProfit = price - minPrice; // Update the maximum profit if a higher profit is possible
            }
        }

        return maxProfit; // Return the maximum profit achieved
    }
};
