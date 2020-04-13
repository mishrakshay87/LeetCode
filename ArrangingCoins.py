class Solution:
    def arrangeCoins(self, n: int) -> int:
        
        if n == 0:
            return 0
        i = coins = 0
        while coins < n:
            i += 1
            coins += i
         
        if coins == n:
            return i
        else:
            return i-1