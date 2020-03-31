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
    double min_diff;
  int val_min;
  int closestValue(TreeNode * root, double target) {

    if (root == NULL)
      return -1;
    double diff = 0.0;;
    val_min = root - > val;
    min_diff = abs(root - > val - target);
    findValue(root, target);
    return val_min;

  }

  void findValue(TreeNode * root, double target) {

    if (root == NULL)
      return;

    if (abs(root - > val - target) < min_diff) {
      min_diff = abs(root - > val - target);
      val_min = root - > val;
    }

    findValue(root - > left, target);
    findValue(root - > right, target);

  }

};