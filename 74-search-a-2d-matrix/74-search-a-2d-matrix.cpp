class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int x) {
        int lo = 0, hi = m.size() - 1;
        while (lo <= hi) {
            auto mid = lo + ((hi - lo) >> 1);
            auto f = m[mid].front(), b = m[mid].back();
            if (x >= f && x <= b) {
                break;
            } else if (x >= f) {
                lo = mid + 1;
            } else if (x <= b) {
                hi = mid - 1;
            } else {
                cout << "impossible!\n";
            }
        }
        if (lo <= hi) {
            auto mid = lo + ((hi - lo) >> 1);
            auto p = lower_bound(m[mid].begin(), m[mid].end(), x);
            return p != m[mid].end() && *p == x;
        }
        return false;
    }
};