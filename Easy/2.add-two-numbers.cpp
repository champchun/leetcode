/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
 public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *p = l1, *q = l2;
    ListNode *n = new ListNode(-1);
    ListNode *tail = n;
    int carry = 0;
    int sum = 0;
    while (l1 != NULL || l2 != NULL) {
      if (l1 == NULL)
        sum = 0 + l2->val + carry;
      else if (l2 == NULL)
        sum = l1->val + 0 + carry;
      else
        sum = l1->val + l2->val + carry;
      if (sum > 9) {
        ListNode *temp = new ListNode(sum % 10);
        tail->next = temp;
        carry = 1;
      } else if (sum <= 9) {
        ListNode *temp = new ListNode(sum);
        tail->next = temp;
        carry = 0;
      }
      if (l1 != NULL) {
        l1 = l1->next;
      }
      if (l2 != NULL) {
        l2 = l2->next;
      }
      //   if (l1 != NULL && l2 == NULL) {
      //     l1 = l1->next;
      //   } else if (l1 == NULL && l2 != NULL)
      //     l2 = l2->next;
      //   else {
      //     l1 = l1->next;
      //     l2 = l2->next;
      //   }
      tail = tail->next;
    }
    if (carry == 1) {
      ListNode *temp = new ListNode(carry);
      tail->next = temp;
    }
    return n->next;
  }
};
// @lc code=end
