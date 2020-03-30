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
    ListNode * deleteDuplicates(ListNode * head) {

      if (head == NULL)
        return NULL;
      ListNode * pre0 = head;
      if (!head - > next)
        return head;

      ListNode * pre1 = head - > next;

      // 1 1 2 2

      while (pre0 - > val == pre1 - > val) {
        while ((pre1 - > next) && (pre1 - > val == pre1 - > next - > val)) {
          pre1 = pre1 - > next;
        }
        if (pre1 - > next) {
          pre0 = pre1;
          pre1 = pre1 - > next;
          pre0 - > next = NULL;
          pre0 = pre1;
          if (pre1 - > next) {
            pre1 = pre1 - > next;
            head = pre0;
          } else {
            head = pre1;
            break;
          }
        } else {

          pre1 = NULL;
          head = NULL;
          break;
        }
      }

      while (pre1) {
        if (pre1 - > next == NULL)
          break;
        if (pre1 - > next - > val != pre1 - > val) {
          pre0 = pre0 - > next;
          pre1 = pre1 - > next;
        } else {

          while ((pre1 - > next) && (pre1 - > next - > val == pre1 - > val)) {
            pre1 = pre1 - > next;
          }

          if (pre1 - > next != NULL) {
            pre0 - > next = pre1 - > next;
            pre1 = pre1 - > next;
          } else {
            pre0 - > next = NULL;

          }

        }
      }

      return head;
    }
};