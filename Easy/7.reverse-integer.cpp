/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
 public:
  int reverse(int x) {
    long int result = 0;
    bool negFlag = false;
    if (x < 0) {
      negFlag = true;
      x = abs(x);
    }

    while (x >= 1) {
      if (result * 10 > INT_MAX) {
        return 0;
      }
      result = result * 10 + x % 10;
      x = x / 10;
    }
    if (negFlag) {
      return -1 * result;
    }
    return result;
  }
};
// @lc code=end
