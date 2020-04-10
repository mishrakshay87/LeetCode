class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        min_price = 10001
        profit = 0
        for i in range(len(prices)):
            if prices[i] < min_price:
                min_price = prices[i]
            
            if prices[i] > min_price:
                profit += prices[i] - min_price
                min_price = prices[i]
                
        return profit  