/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <iostream>
#include <vector>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::vector<char> stk;
        for (char c : s)
        {
            switch (c)
            {
            case '(':
            case '{':
            case '[':
                stk.push_back(c);
                break;
            case ')':
                if (stk.empty() || stk.back() != '(')
                    return false;
                stk.pop_back();
                break;
            case '}':
                if (stk.empty() || stk.back() != '{')
                    return false;
                stk.pop_back();
                break;
            case ']':
                if (stk.empty() || stk.back() != '[')
                    return false;
                stk.pop_back();
                break;
            }
        }
        return stk.empty();
    }
};
// @lc code=end
