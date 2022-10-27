#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int factorial(int n)
    {
        int fact = 1;
        for (int i = 2; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }

    // FINDING NEXT PERMUTATION FOR k TIMES TO FIND KTH PERMUTATION.
    void nextPermutation(vector<int> &nums)
    {

        /*  NEXT PERMUTATION
            ind1 for which a[i]<a[i+1],i.e, ind1=i from backwards
            ind2 for which a[i] > a[ind1] from backwards
            swap a[ind1] and a[ind2];
            reverse all after ind1.
            */
        int n = nums.size();
        int ind1, ind2;
        ind1 = ind2 = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                ind1 = i;
                break;
            }
        }
        if (ind1 == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > nums[ind1])
            {
                ind2 = i;
                break;
            }
        }

        swap(nums[ind1], nums[ind2]);

        reverse(nums.begin() + ind1 + 1, nums.end());
    }

    string getPermutation(int n, int k)
    {

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            nums[i] = i + 1;
        }

        for (int i = 1; i < k; i++)
            nextPermutation(nums);

        string str = "";
        for (int i = 0; i < n; i++)
        {
            str += (nums[i] + '0');
        }

        return str;
    }
};