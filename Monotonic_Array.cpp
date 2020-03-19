class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        int n = A.size();
        int mono_inc = 0;
         int mono_dec = 0;
        int flag_mono = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(A[i] < A[i+1])
            {
                mono_inc += 1;
            }
            else if(A[i] > A[i+1])
            {
               mono_dec += 1; 
                
            }
            else if(A[i] == A[i+1])
                    {
                        mono_inc += 1;
                        mono_dec += 1;
                    }
            
        }
        
        if(mono_inc == n-1 || mono_dec == n-1)
        {
            return true;
        }
        else
        {
            return false;   
        }
    }
};