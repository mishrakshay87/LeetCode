# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        
        u = head
        v = head 
        if not u.next:
            return u
        if not (u.next).next:
            return u.next
        while((v.next).next):
            
            u = u.next
            v = (v.next).next
            if ((v.next) and not (v.next).next):
                return u.next
            if(not v.next):
                return u
            