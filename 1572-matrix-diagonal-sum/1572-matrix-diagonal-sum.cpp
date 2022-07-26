class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        auto n = mat.size(), sum = 0UL;
        for (auto i = 0; i < n; ++i) {
            sum += mat[i][i] + mat[i][n - i - 1];
        }
        if (n & 1) {
            sum -= mat[n >> 1][n >> 1];
        }
        return sum;
    }
};