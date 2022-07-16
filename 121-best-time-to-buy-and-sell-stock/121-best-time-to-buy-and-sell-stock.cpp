class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        vector<int> d(n);
        d.back() = p.back();
        for (int i = n - 2; i >= 0; --i) {
            d[i] = max(p[i], d[i + 1]);
        }
        auto mx = INT_MIN;
        for (int i = 0; i < n; ++i) {
            mx = max(mx, d[i] - p[i]);
        }
        return mx;
    }
};