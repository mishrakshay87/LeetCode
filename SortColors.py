class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        for i in range(1,len(nums)):
            j = i - 1
            k = i
            while j >= 0 and nums[k] < nums[j]:
                temp = nums[k]
                nums[k] = nums[j]
                nums[j] = temp
                j = j - 1
                k = k -1
                
        print(nums)