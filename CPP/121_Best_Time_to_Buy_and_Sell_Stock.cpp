class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() < 2)
            return 0;
        int profit = 0, difference;
        int cost = prices[0];
        for (int x : prices)
        {
            if (x > cost)
            {
                difference = x - cost;
                if (difference > profit)
                {
                    profit = difference;
                }
            }
            else
            {
                cost = x;
            }
        }
        return profit;
    }
};