class Solution:
    def arrangeWords(self, text: str) -> str:
        
        if len(text) == 0:
            return text
        words = text.split()
        output = []
        data_dict = defaultdict(list)
        
        for wrd in words:
              data_dict[len(wrd)].append(wrd)
         
        sort_dict = sorted(data_dict.items(),key = lambda x:x[0])
        
        for k,v in sort_dict:
            for val in v:
                output.append(val)
            
        txt = " ".join(output)
       
        return(txt.capitalize())