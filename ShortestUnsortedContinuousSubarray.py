class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        if nums  == sorted(nums):
            return 0
        nums_sorted = sorted(nums)
        arr_test = []
        start = len(nums)
        end = 0
        i = j = 0
        for i in range(len(nums)):
            if nums[i] - nums_sorted[i] != 0:
                if i < start:
                    start = i
                if i > end:
                    end = i
        print(start)
        print(end)
        return(end - start + 1)