class Solution:
    import heapq    
    def findKthLargest(self, nums: List[int], k: int) -> int:
        nums = [-i for i in nums]
        heapq.heapify(nums)
        print(nums)
        
        for i in range(k):
            elem = nums[0]
            heapq.heappop(nums)
        
        return(-1*elem)