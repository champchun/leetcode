#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i, value in enumerate(nums):  # 1
            remaining = target - value  # 2

            if remaining in seen:  # 3
                return [seen[remaining], i]  # 4
            else:
                seen[value] = i  # 5


# @lc code=end
