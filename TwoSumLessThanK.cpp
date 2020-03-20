class Solution {
public:
    int twoSumLessThanK(vector<int>& A, int K) {
      
        int n = A.size();
        int S = 0;
        int max_sum = 0;
        for(int i = 0; i<n ; i++)
            {
                if(A[i] < K) {
                for(int j = i-1 ; j >= 0 ; j--)
                {
                    if((A[i] + A[j] > max_sum) && (A[i] + A[j] < K))
                        max_sum = A[i] + A[j];
                }
                }
            }
        
        if(max_sum == 0)
            return -1;
        else
            return max_sum;
    }
};