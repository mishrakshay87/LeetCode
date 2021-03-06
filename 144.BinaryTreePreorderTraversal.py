# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        
        curr = root
        stck = []
        out_stck = []
        if root == None:
            return root
        
        while True:
            
            if curr != None:
                out_stck.append(curr.val)
                stck.append(curr)
                curr = curr.left
                
            elif len(stck) > 0:
                temp = stck.pop()
                curr = temp.right
                
            else:
                return out_stck
                