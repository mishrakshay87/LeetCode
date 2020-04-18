class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        
        hs_mp = {}
        
        for i in range(len(nums)):
            if nums[i] in hs_mp:
                j= hs_mp[nums[i]]
                diff = abs(i - j)
                if diff <= k:
                    return True
                hs_mp[nums[i]] = i
            else:
                hs_mp[nums[i]] = i
        
        return False