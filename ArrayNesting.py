class Solution:
    def arrayNesting(self, nums: List[int]) -> int:
        
        charDict = {}
   
        max_val = 0
        for i in range(len(nums)):
            j = i
            charDict[i] = 1
            while(1):
                if nums[j] in charDict:
                    if charDict[i] > max_val:
                        max_val = charDict[i]
                    break;
                else:
                    charDict[i] += 1
                    
                j = nums[j]
          
        return(max_val)