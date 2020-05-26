class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int mid = 0;
        if(nums.size() % 2 != 0)
        {
            mid = (nums.size()-1)/2;
        }
        else
        {
           mid = (nums.size())/2-1; 
            
        }
        

        int diff = 0;
        for(auto it=nums.begin();it != nums.end();it++)
        {
            
            diff += abs(nums[mid]-*it);
            
        }
        
        cout<<diff;
        return diff;
    }
};