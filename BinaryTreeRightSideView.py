# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: TreeNode) -> List[int]:
        
        
        out_list = []
        level = [False]*1000
        q = []
        if root == None:
            return 
        q.append((root,0))

        while len(q) > 0:

            curr,lev = q[0]
            q.pop(0)

            if curr != None:
                if level[lev] == False:
                    level[lev] = True               
                    out_list.append(curr.val)
           
                q.append((curr.right,lev+1))
                q.append((curr.left,lev+1))        

        return out_list
    