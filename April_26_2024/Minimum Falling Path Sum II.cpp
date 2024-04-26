class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        for (int i = 0; i < n; i++) {
            dp[0][i] = grid[0][i];
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int min = dp[i][j];
                for (int k = 0; k < n; k++) {
                    if (j == k) continue;
                    min = std::min(min, grid[i][j] + dp[i - 1][k]);
                }
                dp[i][j] = min;
            }
        }
        int ans = dp[n - 1][0];
        for (int i = 1; i < n; i++) {
            if (ans > dp[n-1][i]) {
                ans = dp[n-1][i];
            }
        }
        return ans;
    }
};