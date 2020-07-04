class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if s == None and t != None:
            return False
        elif s != None and t == None:
            return False
        
        if len(s) != len(t):
            return False
        
        str1_map = {}
        str2_map = {}
        for elem in s:
            if elem in str1_map:
                str1_map[elem] += 1
            else:
                str1_map[elem] = 1
                
            
        for elem in t:
            if elem in str2_map:
                str2_map[elem] += 1
            else:
                str2_map[elem] = 1
                
        if str2_map ==  str1_map:
            return True
        else:
            return False