#include <bits/stdc++.h>

using namespace std;

/*
    Memoization Approach:   comments will help in understanding.
*/
class Solution
{
public:
    bool checkEnd(vector<int> &nums, vector<int> &dp, int ind, int n)
    {
        // requirement matched
        if (ind == n - 1)
        {
            return true;
        }

        // base case when nums[ind]==0 no jump is possible
        if (nums[ind] == 0)
            return false;

        if (dp[ind] != -1)
            return dp[ind];

        // as it is greater than n so it can jump to last position.
        if (ind + nums[ind] > n)
            return dp[ind] = true;

        bool ans = false;
        // checking for each possibility fron present ind to all the reachable from it...looking for answer.
        for (int i = 1; ind + i < n && i <= nums[ind]; i++)
        {
            if (dp[ind + i] == -1)
            {
                dp[ind + i] = checkEnd(nums, dp, ind + i, n);
                ans = ans || dp[ind + i];
            }
        }
        return dp[ind] = ans;
    }
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, -1);

        return checkEnd(nums, dp, 0, n);
    }
};