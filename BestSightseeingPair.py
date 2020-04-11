class Solution:
    def maxScoreSightseeingPair(self, A: List[int]) -> int:
        
        maxAi = A[0] + 0
        maxAj = A[1] - 1
        maxI = 0
        maxJ = 1
        max_sum = maxAi + maxAj
        for i in range(1,len(A)-1):
            if A[i]+i > maxAi:
                maxI = i
                maxAi = A[maxI] + maxI
                maxJ = i + 1
            if maxAi + A[i+1] - i -1 >   max_sum:
                maxJ = i+1
                max_sum = maxAi + A[maxJ] - maxJ

        return max_sum
            