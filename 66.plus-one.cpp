/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size(); i--; digits[i] = 0)
        {
            if (digits[i]++ < 9)
                return digits;
        }
        digits[0]++;
        digits.push_back(0);
        return digits;
    }
};
// @lc code=end
