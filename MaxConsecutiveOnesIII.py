class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        
        lo = 0
        hi = 0
        presum = 0
        res = 0
        
        for hi in range(len(nums)):
            
            if nums[hi] == 0:
                presum += 1
                
            if presum > k:
                while nums[lo] == 1:
                    lo += 1
                    
                presum -= 1
                lo += 1
                
            if hi - lo + 1 > res:
                res = hi - lo + 1
                
        
        return(res)