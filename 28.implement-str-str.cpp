/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
#include <string>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (haystack == "" && needle == "")
            return 0;

        int found = haystack.find(needle);
        if (found == string::npos)
            return -1;

        return found;
    }
};
// @lc code=end
