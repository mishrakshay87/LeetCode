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
    bool res = true;
  bool isBalanced(TreeNode * root) {

    int left = 0;
    int right = 0;

    if (root == NULL)
      return true;

    findHeight(root);
    cout << res;
    return res;
  }

  int findHeight(TreeNode * root) {
    int left = 0;
    int right = 0;

    if (root == NULL)
      return 0;

    left = findHeight(root - > left);
    right = findHeight(root - > right);

    if (abs(left - right) > 1)
      res = false;
    return 1 + max(left, right);

  }

};