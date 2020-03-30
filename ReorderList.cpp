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
    void reorderList(ListNode * head) {

      //1 2 3 4 5 NULL
      ListNode * ptr_front = head;
      ListNode * ptr_end = head;
      ListNode * temp;

      if (head == NULL || !ptr_front - > next || !ptr_front - > next - > next)
        return;

      while (ptr_front - > next && ptr_end - > next - > next) {
        while (ptr_end - > next - > next) {
          ptr_end = ptr_end - > next;
        }

        temp = ptr_front - > next;
        ptr_front - > next = ptr_end - > next;
        ptr_end - > next = NULL;
        ptr_front - > next - > next = temp;
        ptr_front = ptr_front - > next - > next;
        ptr_end = ptr_front;

      }

    }
};