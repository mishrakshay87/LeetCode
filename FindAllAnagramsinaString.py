class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        
        
        list_out = []
        if s == None:
            return
        if len(s) < len(p):
            return
        s_list = [0]*26
        p_list = [0]*26
        
        for i in range(len(p)):
            p_list[ord(p[i])-ord('a')] += 1
            
        for i in range(len(p)):
            s_list[ord(s[i])-ord('a')] += 1    
        
        left = right = 0
        right = len(p)-1
        while right <len(s):
            
            if p_list == s_list:
                list_out.append(left)
              
            right += 1

            if right != len(s):
                s_list[ord(s[right])-ord('a')] += 1
            s_list[ord(s[left])-ord('a')] -= 1
            left += 1

        return(list_out)
