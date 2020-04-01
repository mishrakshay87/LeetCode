class Solution:
  def removeDuplicates(self, nums: List[int]) - > int:

  ptr = 0
i = 0
while (ptr < len(nums) - 1):

  while ((ptr < len(nums)) and(nums[i] == nums[ptr])):

    ptr += 1
if (ptr > len(nums) - 1):

  break

nums[i + 1] = nums[ptr]
i += 1

return i + 1