class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
          
        if(len(timeSeries) == 0):
            return 0
        total_attack = duration
        curr_attack = 0
        prev_attack = timeSeries[0] + duration - 1
        
        for t in range(1,len(timeSeries)):
            
            if timeSeries[t] > prev_attack:
                total_attack += duration  
                curr_attack = timeSeries[t] + duration - 1 
                
            elif timeSeries[t] == prev_attack:
                total_attack += duration - 1 
                curr_attack = timeSeries[t] + duration - 1 
                
            elif timeSeries[t] < prev_attack:
                total_attack += max((timeSeries[t] + duration - 1) - prev_attack,0) 
                curr_attack = timeSeries[t] + duration - 1 
            
            prev_attack = curr_attack 
        return(total_attack)        