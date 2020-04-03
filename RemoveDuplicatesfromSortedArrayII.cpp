class Solution:
  def removeDuplicates(self, nums: List[int]) - > int:

    count = 0
    c = Counter(nums)
    print(c)
    
    for key in c:
    
      if (c[key] == 1):
        nums[count] = key
    count += 1
    elif(c[key] >= 2):
      nums[count] = key
    nums[count + 1] = key
    count += 2
    
    return count