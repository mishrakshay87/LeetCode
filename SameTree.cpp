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
    bool isSameTree(TreeNode * p, TreeNode * q) {

      bool b_left = false;
      bool b_right = false;

      if ((q == NULL) && (p == NULL))
        return true;
      if (!(p && q))
        return false;
      //isSameTree(p->left,q->left);

      if (p - > val == q - > val) {
        b_left = isSameTree(p - > left, q - > left);
        b_right = isSameTree(p - > right, q - > right);
        if (b_left && b_right)
          return true;
        else
          return false;
      } else
        return false;

    }
};