#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        // sorting of intervals based on start time.
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> vect;
        vector<int> v;
        int check = 0;
        int len = intervals.size();
        for (int i = 0; i < len - 1; i++)
        {
            // check start time of i+1 less or graeter than end time of i.
            if (intervals[i + 1][0] <= intervals[i][1])
            {
                intervals[i + 1][0] = intervals[i][0];
                intervals[i + 1][1] = max(intervals[i][1], intervals[i + 1][1]);
            }
            else
            {
                vect.push_back(intervals[i]);
            }
        }
        vect.push_back(intervals[len - 1]);

        return vect;
    }
};