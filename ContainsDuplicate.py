class Solution:    
    def containsDuplicate(self, nums: List[int]) -> bool:
        
        hs_mp = {}
        check = True
        
        if len(nums) == 1:
            return False
        
        
        for i in range(len(nums)):
            
            if nums[i] in hs_mp:
                hs_mp[nums[i]] += 1
            else:
                hs_mp[nums[i]] = 1
                
        for key,val in hs_mp.items():
            if val >= 2:
                return True
            
        
        return False