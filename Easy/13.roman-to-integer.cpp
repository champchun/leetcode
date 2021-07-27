/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
 public:
  int romanToInt(string s) {
    if (s.empty()) return 0;
    string buff = s;
    int result = 0;
    int found = s.find("IV");
    if (found != std::string::npos) {
      buff.replace(found, 2, "  ");
      result = result + 4;
    }
    found = s.find("IX");
    if (found != std::string::npos) {
      buff.replace(found, 2, "  ");
      result = result + 9;
    }
    found = s.find("XL");
    if (found != std::string::npos) {
      buff.replace(found, 2, "  ");
      result = result + 40;
    }
    found = s.find("XC");
    if (found != std::string::npos) {
      buff.replace(found, 2, "  ");
      result = result + 90;
    }
    found = s.find("CD");
    if (found != std::string::npos) {
      buff.replace(found, 2, "  ");
      result = result + 400;
    }
    found = s.find("CM");
    if (found != std::string::npos) {
      buff.replace(found, 2, "  ");
      result = result + 900;
    }

    result = result + std::count(buff.begin(), buff.end(), 'I') * 1;
    result = result + std::count(buff.begin(), buff.end(), 'V') * 5;
    result = result + std::count(buff.begin(), buff.end(), 'X') * 10;
    result = result + std::count(buff.begin(), buff.end(), 'L') * 50;
    result = result + std::count(buff.begin(), buff.end(), 'C') * 100;
    result = result + std::count(buff.begin(), buff.end(), 'D') * 500;
    result = result + std::count(buff.begin(), buff.end(), 'M') * 1000;
    return result;
  }
};
// @lc code=end
