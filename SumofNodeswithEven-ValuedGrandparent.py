# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        
        
        if root == None:
            return 0
        if root.left == None and root.right == None:
            return 0
        
        if root.left:
            if root.left.left:
                findeven(root.left.left,root.left,root)
            if root.left.right:
                findeven(root.left.right,root.left,root)
                
        if root.right:   
            if root.right.right:
                findeven(root.right.right,root.right,root)
            if root.right.left:    
                findeven(root.right.left,root.right,root)
        
        return(total_val)

total_val = 0

def findeven(root: TreeNode,parent: TreeNode,grandparent: TreeNode):
        global total_val     
      
        if root == None:
            return total_val
        
        if grandparent.val % 2 == 0:
            total_val += root.val
            
            
            grandparent = parent
            parent = root

            findeven(root.left,parent,grandparent)
            
            findeven(root.right,parent,grandparent)
    