/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <stdbool.h>

bool isPalindrome(int x)
{
  if (x < 0)
    return false;

  int original = x;
  long rev = 0, remainder;
  while (x != 0)
  {
    remainder = x % 10;
    rev = rev * 10 + remainder;
    x /= 10;
  }

  return original == rev;
}
// @lc code=end
