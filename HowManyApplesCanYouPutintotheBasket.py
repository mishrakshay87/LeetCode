class Solution:
    def maxNumberOfApples(self, arr: List[int]) -> int:
        sorted_list = sorted(arr)
        curr_weight = []
        flag = 0        
        for wt in sorted_list:
                
                curr_weight.append(wt)
                if sum(curr_weight) > 5000:
                    flag = 1
                    break
        if(flag == 1):            
            return(len(curr_weight) - 1)
        else:
            return(len(curr_weight))