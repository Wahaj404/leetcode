class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v(n, vector<int>(1, 1));
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < i; ++j) {
                v[i].push_back(v[i - 1][j - 1] + v[i - 1][j]);
            }
            v[i].push_back(1);
        }
        return v;
    }
};