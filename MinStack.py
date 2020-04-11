import sys
class MinStack:


    def __init__(self):
        
        self.lst = []
        self.min_ls = []
        self.min_elem = sys.maxsize
        """
        initialize your data structure here.
        """
        

    def push(self, x: int) -> None:
        
        if len(self.min_ls) == 0:
            self.min_ls.append(x)
        else:
            if x < self.min_ls[-1]:
                self.min_ls.append(x)
            else:
                self.min_ls.append(self.min_ls[-1])
        
            
            
        self.lst.append(x)
        

    def pop(self) -> None:
        del self.lst[-1]
        #print("popping from min list->"+str(self.min_ls[-1]))
        del self.min_ls[-1]
        

    def top(self) -> int:
        return self.lst[-1]
        

    def getMin(self) -> int:
       # print("returning min->"+str(self.min_ls))
        return self.min_ls[-1]
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()