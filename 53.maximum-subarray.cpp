/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int largestSum = -9999999;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (largestSum < sum)
                largestSum = sum;
            for (int j = i + 1; j < nums.size(); j++)
            {
                sum += nums[j];
                if (largestSum < sum)
                    largestSum = sum;
            }
            sum = 0;
        }
        return largestSum;
    }
    // DP
    // int maxSubArray(vector<int> &nums)
    // {
    //     if (nums.size() == 0)
    //         return 0;
    //     else if (nums.size() == 1)
    //         return nums.at(0);

    //     int int_local_max = nums.at(0), int_global_max = nums.at(0);
    //     size_t sz_length = nums.size();
    //     for (size_t i = 1; i != sz_length; ++i)
    //     {
    //         int_local_max = max(int_local_max + nums.at(i), nums.at(i));
    //         int_global_max = max(int_local_max, int_global_max);
    //     }

    //     return int_global_max;
    // }
};
// @lc code=end
