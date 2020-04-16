/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int min_diff = 0;
    vector<int> vec;
    int getMinimumDifference(TreeNode* root) {
    
        difference(root);
        min_diff = INT_MAX;
        
        for( int i = 0;i<vec.size();i++)
        {
            //cout<<vec[i]<<endl;
            for(int j = i+1;j<vec.size();j++)
            {
                // cout<<vec[j]<<endl;
                //cout<<abs(vec[i] - vec[j])<<endl;
                if(abs(vec[i] - vec[j]) < min_diff)
                {
                    min_diff = abs(vec[i] - vec[j]);
                    
                }
                
                
            }
         }
        
     //   cout<<min_diff<<endl;
       
       
        return min_diff;
    }
    
    
   void difference(TreeNode* root)
    {
      
        if(root == NULL)
            return;
        vec.push_back(root->val);
        
        difference(root->left);
        difference(root->right);
        
    }
    
    
    
};