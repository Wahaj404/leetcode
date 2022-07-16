class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        auto n = mat.size(), m = mat.front().size();
        if (r * c != n * m) {
            return mat;
        }
        vector<vector<int>> v(r, vector<int>(c));
        auto x = 0, y = 0;
        for (auto i = 0; i < n; ++i) {
            for (auto j = 0; j < m; ++j) {
                v[x][y] = mat[i][j];
                ++y;
                if (y == c) {
                    y = 0;
                    ++x;
                }
            }
        }
        return v;
    }
};