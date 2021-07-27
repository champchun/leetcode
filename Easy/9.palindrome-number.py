#
# @lc app=leetcode id=9 lang=python3
#
# [9] Palindrome Number
#

# @lc code=start
import math


class Solution:
    def isPalindrome(self, x: int) -> bool:
        result = 0
        if x.bit_length() >= 32 | x <= 0:
            return 0

        result = int(str(x)[::-1])

        if result.bit_length() >= 32:
            return 0

        return x == result


# @lc code=end
