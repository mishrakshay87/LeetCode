/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#
import < queue >
  class Solution {
    public:

      bool leafSimilar(TreeNode * root1, TreeNode * root2) {

        vector < int > v1, v2;

        findLeafSeq(root1, v1);
        findLeafSeq(root2, v2);

        if (v1 == v2)
          return true;
        else return false;

      }

    void findLeafSeq(TreeNode * root, vector < int > & leafqA) {
      if (root == NULL)
        return;
      if ((root - > left == NULL) && (root - > right == NULL))
        leafqA.push_back(root - > val);

      findLeafSeq(root - > left, leafqA);
      findLeafSeq(root - > right, leafqA);

    }

  };