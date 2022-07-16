class Solution {
public:
    int climbStairs(int n) {
        ++n;
        vector<int> v(n, 1);
        for (int i = 2; i < n; ++i) {
            v[i] = v[i - 1] + v[i - 2];
        }
        return v.back();
    }
};