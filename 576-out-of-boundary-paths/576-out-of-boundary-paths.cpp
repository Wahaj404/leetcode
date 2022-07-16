class Solution {
    int dp[51][51][51];
public:
    Solution() {
        for (auto &i : dp) {
            for (auto &j : i) {
                for (auto &k : j) {
                    k = -1;
                }
            }
        }
    }
    int findPaths(int m, int n, int mx, int i, int j) {
        constexpr auto M = 1000000007;
        if (i < 0 || i >= m || j < 0 || j >= n) {
            return 1;
        }
        if (mx == 0) {
            return 0;
        }
        if (dp[i][j][mx] == -1) {
            dp[i][j][mx] = findPaths(m, n, mx - 1, i - 1, j);
            dp[i][j][mx] = (dp[i][j][mx] + findPaths(m, n, mx - 1, i, j - 1)) % M;
            dp[i][j][mx] = (dp[i][j][mx] + findPaths(m, n, mx - 1, i + 1, j)) % M;
            dp[i][j][mx] = (dp[i][j][mx] + findPaths(m, n, mx - 1, i, j + 1)) % M;
        }
        return dp[i][j][mx];
    }
};