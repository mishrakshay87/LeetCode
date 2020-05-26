class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    
        
        
        
        int l1 = 0;
        int l2 = 0;
        vector<int> vec;
        
     if(n != 0 && m != 0){
        while(l1 < n && l2 < m)
        {
            if(nums2[l1] < nums1[l2])
            {
                vec.push_back(nums2[l1++]);
            }
            else if(nums2[l1] > nums1[l2])
            {
                vec.push_back(nums1[l2++]);
            }
            else{
                vec.push_back(nums2[l1++]);
                vec.push_back(nums1[l2++]);
            }
            
        }
    
       
     }
         while(l1 < n)
        {
            vec.push_back(nums2[l1++]);
        }
         
        while(l2 < m)
        {
            vec.push_back(nums1[l2++]);
        }
         nums1 = vec;
        
        
    }
};