class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        
        if len(stones) == 1:
            return stones[0]
        while(len(stones) != 1):
            stones = sorted(stones,reverse = True)
            print(stones)
            max_elem1 = stones[0]
            max_elem2 = stones[1]
            temp = abs(max_elem1 - max_elem2)
            del stones[0:2]
            stones.insert(0,temp)
        
        return(sum(stones))