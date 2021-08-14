/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */

#include <stdio.h>
#include <string.h>
// @lc code=start
static int roman_to_integer(char c)
{
  switch (c)
  {
  case 'I':
    return 1;
  case 'V':
    return 5;
  case 'X':
    return 10;
  case 'L':
    return 50;
  case 'C':
    return 100;
  case 'D':
    return 500;
  case 'M':
    return 1000;
  default:
    return 0;
  }
}

int romanToInt(char *s)
{
  int i, int_num = roman_to_integer(s[0]);

  for (i = 1; s[i] != '\0'; i++)
  {
    int prev_num = roman_to_integer(s[i - 1]);
    int cur_num = roman_to_integer(s[i]);
    if (prev_num < cur_num)
    {
      int_num = int_num - prev_num + (cur_num - prev_num);
    }
    else
    {
      int_num += cur_num;
    }
  }
  return int_num;
}
// @lc code=end
