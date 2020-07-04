class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        
        s1_map = [0]*26
        s2_map = [0]*26
        
        if s1 != None and s2 == None:
            return False
        
        if len(s1) > len(s2):
            return False
        
        for i in range(len(s1)):
            s1_map[ord(s1[i])-ord('a')] += 1
            s2_map[ord(s2[i])-ord('a')] += 1
            
        left = 0
        right = len(s1) - 1
        
        while right < len(s2):
            
            
            if s1_map == s2_map:
                return True
            right += 1
            if right != len(s2):
                
                s2_map[ord(s2[right])-ord('a')] += 1
                
            s2_map[ord(s2[left])-ord('a')] -= 1
            left += 1
            
        return False    