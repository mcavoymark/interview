class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        buy = prices[0]
        sell = prices[0]
        for i in range(1,len(prices)):
            if prices[i] >= sell: #update sell price
                sell = prices[i]
            else: #sell
                profit += sell - buy
                #restart
                buy = prices[i]
                sell = prices[i]
        if sell > buy:
            profit += sell - buy
        return profit
