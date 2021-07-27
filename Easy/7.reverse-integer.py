#
# @lc app=leetcode id=7 lang=python3
#
# [7] Reverse Integer
#

# @lc code=start
import math


class Solution:
    def reverse(self, x: int) -> int:
        result = 0
        if x.bit_length() >= 32 | x == 0:
            return 0

        if (x < 0):
            negative_flag = True
            x = abs(x)
        else:
            negative_flag = False

        while x >= 1:
            result = result * 10 + x % 10
            if result.bit_length() >= 32:
                return 0
            x = x // 10

        if negative_flag:
            return -1 * result
        else:
            return result

# @lc code=end
