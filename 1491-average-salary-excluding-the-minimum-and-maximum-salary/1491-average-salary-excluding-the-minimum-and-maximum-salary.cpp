class Solution {
public:
    double average(vector<int>& salary) {
        auto mn = INT_MAX, sm = 0, mx = INT_MIN;
        for (int i : salary) {
            sm += i;
            mn = min(mn, i);
            mx = max(mx, i);
        }
        return static_cast<double>(sm - mn - mx) / (salary.size() - 2);
    }
};