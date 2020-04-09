class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        
        count = 0
        i = 0
        m = len(flowerbed) 
        if(n == 0):
            return True
                
        if(len(flowerbed)>=2):
            if((flowerbed[-1] == 0) and (flowerbed[-2] == 0)):
                count += 1   
                m = m -1
        
        elif(len(flowerbed) <= 2 and sum(flowerbed) >0 and n!=0):
            return False
        elif(len(flowerbed) <= 2 and sum(flowerbed) == 0 and n!=0):
            return True
      
        print(count)
        
        if(len(flowerbed) >=3):
            if((flowerbed[0] == flowerbed[1] == 0)):
                count += 1
                i += 1

           
        while(i+2 <= m-1):
            if flowerbed[i] == flowerbed[i+1] == flowerbed[i+2] == 0:
                count += 1
                i = i + 2
                continue
            i += 1    
        

        if count - n >= 0:
            return True
        else:
            return False