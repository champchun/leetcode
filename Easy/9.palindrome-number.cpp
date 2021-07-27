/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
 public:
  bool isPalindrome(int x) {
    if (x == 0) {
      return true;
    }
    if (x < 0) {
      return false;
    }
    int num = x;
    long result = 0;
    while (num >= 1) {
      if (result * 10 > INT_MAX) {
        return 0;
      }
      result = result * 10 + num % 10;
      num = num / 10;
    }
    return result == x;
  }
};
// @lc code=end
