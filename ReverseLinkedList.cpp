/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
  public:

    ListNode * reverseList(ListNode * head) {

      ListNode * a;
      ListNode * b;
      ListNode * c;

      if (head == NULL)
        return head;
      a = NULL;
      b = head;

      c = b - > next;

      while (c != NULL) {

        b - > next = a;
        a = b;
        b = c;
        c = c - > next;

      }

      b - > next = a;
      a = b;
      return a;

    }

};