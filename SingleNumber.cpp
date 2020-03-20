class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int i =0;
        int xor_res = 0;
        for(i = 0; i < n; i++)
        {
            xor_res = xor_res^nums[i];
            
        }
        
        return xor_res;
    }
};