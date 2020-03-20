class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        
        int na = A.size();
        int nb = B.size();
        int sumA = 0;
        int sumB = 0;
        int find_sum = 0;
        int break_flag = 0;
        int i =0;
        int j =0;
        int sumA_temp = 0;
        int sumB_temp = 0;
        vector<int> vec;
        for(int k = 0 ; k < na ; k++)
        {
            sumA += A[k]; 
        }
        
           for(int k = 0 ; k < nb ; k++)
        { 
            sumB += B[k];   
        }
        
        find_sum = (sumA + sumB)/2;
      
        
        for(j = 0; j< nb; j++)
        {
             if(break_flag == 1)
         {
             break;
             
         }
            sumB_temp = sumB - B[j];
        for(i = 0; i< na; i++)
        {
            sumA_temp = sumA - A[i];
            
        
            if((sumA_temp + B[j] == find_sum) && (sumB_temp + A[i] == find_sum))
            {
                break_flag = 1;
                break;  
            }
        }
            
         if(break_flag == 1)
         {
             break; 
         } 
            }
        
        cout<<A[i]<<endl;
        cout<<B[j]<<endl;
        
        vec.push_back(A[i]);
        vec.push_back(B[j]);
        return vec;
    }
};