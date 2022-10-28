class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,1));   // 2d array with all values 1
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};
// 1. First of all, we will make a 2d array with m rows and n columns storing value 1.
// 2.vector(n, 1) defines an array of size n with each value 1.
// 3. Iterate the loop to add values of above and left value. Because the robot can come at a block either from above or from left.
// 4. Return the value of dp at the finish point i.e., dp[m-1][n-1]
