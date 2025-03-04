Link : https : // leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/?

               class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int maxProfit = 0;

        for (int i = 1; i < n; ++i)
        {
            if (prices[i] > prices[i - 1])
            {
                maxProfit += prices[i] - prices[i - 1];
            }
        }

        return maxProfit;
    }
};
