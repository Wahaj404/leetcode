class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        using umap = unordered_map<char, int>;
        auto freq = [](umap const& mp) {
            for (auto [k, v] : mp) {
                if (v != 1 && k != '.') {
                    return false;
                }
            }
            return true;
        };
        auto row = [&](int i) {
            umap mp;
            for (auto ch : board[i]) {
                ++mp[ch];
            }
            return freq(mp);
        };
        auto col = [&](int i) {
            umap mp;
            for (int j = 0; j < 9; ++j) {
                ++mp[board[j][i]];
            }
            return freq(mp);
        };
        auto box = [&](int i, int j) {
            umap mp;
            for (int x = 0; x < 3; ++x) {
                for (int y = 0; y < 3; ++y) {
                    ++mp[board[i + x][j + y]];
                }
            }
            return freq(mp);
        };
        for (int i = 0; i < 9; ++i) {
            if (!row(i) || !col(i) || !box((i / 3) * 3, (i % 3) * 3)) {
                return false;
            }
        }
        // for (int i = 0; i < 9; i += 3) {
        //     for (int j = 0; j < 3; ++j)
        //     if (!row(i) || !col(i)) {
        //         return false;
        //     }
        // }
        return true;
    }
};