/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int index = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val)
            {
                nums[index++] = nums[i];
            }
        }
        return index;
    }
};
// @lc code=end
