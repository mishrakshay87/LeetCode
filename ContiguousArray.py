class Solution:
    from collections import defaultdict
    def findMaxLength(self, nums: List[int]) -> int:
        
        sum_hash = {}
        sum_hash = defaultdict(list)
        if len(nums) == 0:
            return 0
        arr = [1 if x == 1 else -1 for x in nums]
        
        sum_arr = []
        sum_arr.append(arr[0])
        sum_hash[arr[0]].append(0)
        for i in range(1,len(nums)):
            sum_hash[sum_arr[-1]+arr[i]].append(i)
            sum_arr.append(sum_arr[-1]+arr[i])
            
        #print(sum_hash)
        max_ind = 0
        min_ind = 0
        max_diff = 0
        for key in sum_hash:
            
            lm = sum_hash[key]
            max_ind = max(lm)
            min_ind = min(lm)
            if max_ind - min_ind > max_diff:
                max_diff = max_ind - min_ind
        
        if 0 in sum_hash:
            print(max(sum_hash[0]))
            return(max(max(sum_hash[0])+1,max_diff))   
        else:
            return(max_diff)