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

    int hx = 0;
  int hy = 0;
  int hl = 0;
  bool isCousins(TreeNode * root, int x, int y) {

    findCousin(root, NULL, x, y, hl, true);
    cout << hx << endl;
    cout << hy << endl;

    if (hx == hy)
      return true;
    else
      return false;

  }

  void findCousin(TreeNode * root, TreeNode * parent, int x, int y, int hl1, bool isLeft) {

    if (root == NULL)
      return;
    if (root - > val == x) {
      hx = hl1 + 1;
      if (isLeft == true) {
        if (parent != NULL) {
          if (parent - > right != NULL)
            if (parent - > right - > val == y)
              hx = 0;
        }
      } else if (isLeft == false) {
        if (parent != NULL) {
          if (parent - > left != NULL)
            if (parent - > left - > val == y)
              hx = 0;
        }
      }

    }

    if (root - > val == y)

    {
      hy = hl1 + 1;

      if (isLeft == true) {
        if (parent != NULL) {
          if (parent - > right != NULL)
            if (parent - > right - > val == x)
              hx = 0;
        }
      } else if (isLeft == false) {
        if (parent != NULL) {
          if (parent - > left != NULL)
            if (parent - > left - > val == x)
              hx = 0;
        }
      }

    }

    findCousin(root - > left, root, x, y, hl1 + 1, true);
    findCousin(root - > right, root, x, y, hl1 + 1, false);

  }
};