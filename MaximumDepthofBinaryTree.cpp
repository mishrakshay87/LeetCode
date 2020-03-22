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
    int maxDepth(TreeNode* root) {
        
        int left = 0;
        int right = 0;
        
        if(root == NULL)
            return 0;
        
         left =  maxDepth(root->left);
         right = maxDepth(root->right);
        
        return 1 + max(left,right);
    }
};