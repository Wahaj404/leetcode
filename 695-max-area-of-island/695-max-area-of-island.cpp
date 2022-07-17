class Solution {
    void f(vector<vector<int>>& g, int i, int j, int r) {
        if (i >= 0 && i < g.size() && j >= 0 && j < g[i].size() && g[i][j] == 1) {
            g[i][j] = r;
            f(g, i - 1, j, r);
            f(g, i, j + 1, r);
            f(g, i + 1, j, r);
            f(g, i, j - 1, r);
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        auto m = g.size(), n = g.front().size(), r = 2UL;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (g[i][j] == 1) {
                    f(g, i, j, r++);
                }
            }
        }
        vector<int> v(r);
        for (auto const& i : g) {
            for (auto const& j : i) {
                ++v[j];
            }
        }
        return *max_element(v.begin() + 1, v.end());
    }
};