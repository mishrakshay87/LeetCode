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
    stack < int > stck;
  int val = 0;
  bool isPalindrome(ListNode * head) {

    if (head == NULL)
      return true;
    ListNode * temp = head;
    ListNode * temp_front = head;
    ListNode * temp_test = head;
    bool isPalindrome = true;

    // stck.push(head->val);

    while (temp_front && temp_front - > next) {
      stck.push(temp - > val);
      temp_front = temp_front - > next - > next;
      temp = temp - > next;

    }

    if (temp_front && !temp_front - > next)
      temp = temp - > next;

    while (stck.size() != 0) {
      val = stck.top();
      stck.pop();
      cout << "stack val->" << val << endl;
      cout << stck.size() << endl;
      cout << "temp val->" << temp - > val << endl;
      if (val != temp - > val) {
        isPalindrome = false;
        break;
      }
      temp = temp - > next;
    }

    return isPalindrome;
  }
};