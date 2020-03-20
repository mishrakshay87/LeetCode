class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        cout<<n<<endl;
        int i = 0;
        int left = 0;
        int right = n - 1;
        vector<int> vec;
        right = n-1;
          
           
            while(right > left) 
            {
                 if ((numbers[left] + numbers[right] == target))
                {
                    vec.push_back(left+1);
                    vec.push_back(right+1);
                    break;
                }
                else if((numbers[left] + numbers[right] > target))
                {
                     right--;
                }
                else if((numbers[left] + numbers[right] < target))
                {
                    
                    left++;
                }
        }
        
        return vec;
    }
};