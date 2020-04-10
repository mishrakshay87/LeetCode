class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        max_profit = 0
        profit = 0
        for i in range(len(prices)-1):
            buy_price = prices[i]
            sell_price = max(prices[i+1:])
            profit = sell_price - buy_price
            if(profit > max_profit):
                max_profit = profit
            
        return(max_profit)