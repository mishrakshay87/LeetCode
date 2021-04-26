class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        
        costs.sort()
        
        num_icream = 0
        if costs[0] > coins:
            return 0
        
        # costs = [1,3,2,4,1], coins = 7
        # [1,1,2,3,4]
        for c in costs:
            
            if c <= coins:
                coins = coins - c
                num_icream += 1
                
        return num_icream       
                
                
            
            
            
            
            
        
        
        