class Solution {
    void f(vector<vector<char>>& g, int i, int j) {
        if (i >= 0 && i < g.size() && j >= 0 && j < g[i].size() && g[i][j] == '1') {
            g[i][j] = '0';
            f(g, i - 1, j);
            f(g, i, j + 1);
            f(g, i + 1, j);
            f(g, i, j - 1);
        }
    }
public:
    int numIslands(vector<vector<char>>& g) {
        auto m = g.size(), n = g.front().size(), r = 0UL;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (g[i][j] == '1') {
                    f(g, i, j);
                    ++r;
                }
            }
        }
        return r;
    }
};