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
    bool isUnivalTree(TreeNode * root) {

      int val = 0;
      if (root == NULL)
        return true;

      val = tree_val(root);

      if (val == -1)
        return false;
      else
        return true;
    }

  int tree_val(TreeNode * root) {
    int b_left_val;
    int b_right_val;

    if ((root - > left == root - > right) && (root - > right == NULL))
      return root - > val;

    if (root - > left == NULL) {
      b_left_val = root - > val;
    } else {
      b_left_val = tree_val(root - > left);
    }

    if (root - > right == NULL) {
      b_right_val = root - > val;
    } else {
      b_right_val = tree_val(root - > right);
    }

    if ((b_left_val == b_right_val) && (b_right_val == root - > val))
      return root - > val;
    else
      return -1;

  }
};