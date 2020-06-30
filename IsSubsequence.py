class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        
        if s == "":
            return True
        
        
        if t == "":
            return False
        
        if len(s) > len(t):
            return False
            
        str_list = list(s)   

        for el in t:
            
            if el == str_list[0]:
                str_list.remove(el)
                
            if len(str_list) == 0:
                return True
            
        return False